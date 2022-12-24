#include "function_pointer.h"
#include "doctest.h"

// int _plus2(int a) { return a + 2; }
// int _mult2(int a) { return a * 2; }
// int _negate(int a) { return a * -1; }

// TEST_SUITE("function_pointer" * doctest::skip())
// {

//     TEST_CASE("apply single one parameter function pointer")
//     {
//         int n = 5;
//         apply(&n, _plus2);
//         CHECK(n == 7);

//         apply(&n, _mult2);
//         CHECK(n == 14);

//         apply(&n, _negate);
//         CHECK(n == -14);

//         apply(&n, _plus2);
//         CHECK(n == -12);
//     }

//     TEST_CASE("apply single two parameter function pointer")
//     {
//         int a = 1, b = 3, c;
//         apply2(a, b, &c, _add);
//         CHECK(c == 4);

//         apply2(a, b, &c, _sub);
//         CHECK(c == -2);

//         apply2(a, b, &c, _max);
//         CHECK(c == 3);

//         apply2(a, b, &c, _min);
//         CHECK(c == 1);
//     }

//     TEST_CASE("apply function pointer list to single value")
//     {
//         int (*fn_list[])(int) = {_plus2, _mult2, _negate};
//         int n = 1;
//         apply_fn_list(&n, fn_list, 3);
//         CHECK(n == -6);

//         apply_fn_list(&n, fn_list, 3);
//         CHECK(n == 8);
//     }

//     TEST_CASE("return function pointer")
//     {
//         int actual = get_func('+')(5, 4);
//         CHECK(actual == 9);

//         actual = get_func('-')(5, 4);
//         CHECK(actual == 1);

//         actual = get_func('*')(5, 4);
//         CHECK(actual == 20);

//         actual = get_func('/')(5, 4);
//         CHECK(actual == 1);

//         actual = get_func('+')(5, 4);
//         CHECK(actual == 9);

//         CHECK(nullptr == (void*) get_func('a'));
//     }

//     TEST_CASE("return self struct with fn ptr")
//     {
//         _self p = {0, self_func};
//         p.f(&p);
//         CHECK(p.n == 1);

//         p.f(&p)->f(&p);
//         CHECK(p.n == 3);

//         p.f(&p)->f(&p)->f(&p);
//         CHECK(p.n == 6);

//         p.f(&p)->f(&p)->f(&p)->f(&p)->f(&p);
//         CHECK(p.n == 11);
//     }
// }