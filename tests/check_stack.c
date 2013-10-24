#include<stdlib.h>
#include<check.h>
#include"../src/stack.h"

START_TEST(int_push_pop)
{
        stack_t s;
        int n = random() % 60267;
        int *a = calloc(n, sizeof (int));
        ck_assert_int_eq(stack_init(&s, n), 0);
        int i;
        for (i = 0; i < n; i++) {
                a[i] = random() % 1210211;
        }

        for (i = 0; i < n; i++) {
                int x = stack_push(&s, a[i]);
                ck_assert_int_eq(x, 0);
                x = stack_len(&s);
                ck_assert_int_eq(x, i + 1);
                x = s.data[s.top];
                ck_assert_int_eq(x, a[i]);
        }

        for (i = n - 1; i >= 0; i--) {
                int value;
                int x = stack_pop(&s, &value);
                ck_assert_int_eq(x, 0);
                ck_assert_int_eq(value, a[i]);
                x = stack_len(&s);
                ck_assert_int_eq(x, i);
        }
        stack_clear(&s);
        stack_destroy(&s);
}

END_TEST

Suite* stack_suite()
{
        Suite *s = suite_create("Stack");

        TCase *tc_int = tcase_create("int");
        /* Stack int data type Test Case*/

        tcase_add_test(tc_int, int_push_pop);

        suite_add_tcase(s, tc_int);

        return s;
}

int main()
{
        int number_failed;
        Suite *s = stack_suite();
        SRunner *sr = srunner_create(s);
        srunner_run_all(sr, CK_NORMAL);
        number_failed = srunner_ntests_failed(sr);
        srunner_free(sr);

        return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
