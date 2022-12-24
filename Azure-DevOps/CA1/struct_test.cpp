#include "struct.h"
#include "doctest.h"

// TEST_SUITE("struct" * doctest::skip())
// {
//     TEST_CASE("simple struct")
//     {
//         _student std = {"Zhila", 17.5};
//         add_grade(&std, 0.5);
//         CHECK(std.grade == 18);

//         add_grade(&std, -1);
//         CHECK(std.grade == 17);

//         CHECK(19 == add_grade(&std, 2)->grade);
//     }

//     TEST_CASE("simple struct memory layout")
//     {
//         int_struct s = {.A = 0xaaaaaaaa, .B = 0xbbbbbbbb, .C = 0xcccccccc, .D = 0xdddddddd};
//         // Use the following command in DEBUG CONSOLE to inspect memory:
//         // -exec x/16bx &s
//         unsigned int *ptr = get_some_ptr(&s);
//         CHECK(*ptr == 0xccccbbbb);

//         s.B = 0xffffffff;
//         ptr = get_some_ptr(&s);
//         CHECK(*ptr == 0xccccffff);

//         s.C = 0xeeeeeeee;
//         ptr = get_some_ptr(&s);
//         CHECK(*ptr == 0xeeeeffff);
//     }

//     TEST_CASE("complex struct memory layout")
//     {
//         complex_struct s = {
//             .A = 0xaaaaaaaa,
//             .B = "AAAAA",
//             .C = 0xcccccccc,
//             .D = 1.19999993,
//             .E = 0xeeeeeeee};
//         ((char *)&s)[10] = 0;
//         ((char *)&s)[11] = 0;
//         // Use the following command in DEBUG CONSOLE to inspect memory:
//         // -exec x/32bx &s
//         // Inspect the memory after each line and predict whether the test
//         // will pass or not before CHECK statements.
//         unsigned long long *ptr = get_some_ptr2(&s);
//         CHECK(*ptr == 0xcccc000000414141);

//         ((char *)&s)[13] = 0x99;
//         CHECK(*ptr == 0x99cc000000414141);
//         CHECK(s.C == 0xcccc99cc);

//         s.C = 0xffffffff;
//         CHECK(*ptr == 0xffff000000414141);

//         ((char *)&s)[6] = 0x42;
//         CHECK(*ptr == 0xffff000000414142);
//         CHECK(s.B[2] == 'B');
//     }
// }