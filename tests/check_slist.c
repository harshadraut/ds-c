#include<stdlib.h>
#include<stdbool.h>
#include<check.h>
#include<../src/slist.h>

START_TEST(insert_end)
{
        sl_list *list = malloc(sizeof (sl_list));
        sl_list_init(list);
        int n = random() % 40007;
        int a[n];
        int i, b;
        for (i = 0; i < n; i++) {
                int x = random();
                printf("%ld\n", x);
                a[i] = x % 100000007;
                sl_list_ins_end(list, a[i]);
                if (sl_list_at(list, i, &b) != -1)
                        ck_assert_int_eq(a[i], b);
                else
                        ck_abort();
        }
}

END_TEST


Suite* singlelinkedlist()
{
        Suite *s = suite_create("Single Linked List");

        TCase *tc_insert = tcase_create("Insert");
        /* Single Linked List Insertion Test Case*/

        tcase_add_test(tc_insert, insert_end);

        suite_add_tcase(s, tc_insert);

        return s;
}

int main()
{
        int number_failed;
        Suite *s = singlelinkedlist();
        SRunner *sr = srunner_create(s);
        srunner_run_all(sr, CK_NORMAL);
        number_failed = srunner_ntests_failed(sr);
        srunner_free(sr);

        return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}

