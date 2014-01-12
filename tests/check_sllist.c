#include<stdlib.h>
#include<check.h>
#include<../src/sllist.h>

START_TEST(insert_begin)
{
        sllist *list = malloc(sizeof (sllist));
        sllist_init(list);
        int n = random() % 40237;
        int *a = calloc(n, sizeof (int));
        int i, b;
        for (i = 0; i < n; i++) {
                int x = random();
                a[i] = x % 200000007;
                sllist_insbegin(list, a[i]);
        }
        for (i = 0; i < n; i++) {
                if (sllist_at(list, i, &b) != -1)
                        ck_assert_int_eq(a[n - 1 - i], b);
                else
                        ck_abort();
        }
        free(a);
}

END_TEST


START_TEST(insert_end)
{
        sllist *list = malloc(sizeof (sllist));
        sllist_init(list);
        int n = random() % 40007;
        int *a = calloc(n, sizeof (int));
        int i, b;
        for (i = 0; i < n; i++) {
                int x = random();
                a[i] = x % 100000007;
                sllist_insend(list, a[i]);
                if (sllist_at(list, i, &b) != -1)
                        ck_assert_int_eq(a[i], b);
                else
                        ck_abort();
        }
        free(a);
}

END_TEST


Suite* singlelinkedlist()
{
        Suite *s = suite_create("Single Linked List");

        TCase *tc_insert = tcase_create("Insert");
        /* Single Linked List Insertion Test Case*/

        tcase_add_test(tc_insert, insert_begin);
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

