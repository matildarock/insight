#include "bits.h"
#include "doctest.h"

// TEST_SUITE("memory" * doctest::skip())
// {
//     TEST_CASE("count ON bits")
//     {
//         int actual = count_on_bits(5);
//         int expected = 2;
//         CHECK(actual == expected);

//         actual = count_on_bits(16);
//         expected = 1;
//         CHECK(actual == expected);

//         actual = count_on_bits(0xf0);
//         expected = 4;
//         CHECK(actual == expected);

//         actual = count_on_bits(0xa00a);
//         expected = 4;
//         CHECK(actual == expected);
//     }

//     TEST_CASE("make bit stream")
//     {
//         int actual = make_bits(3, 3);
//         int expected = 0x111; // 100010001
//         CHECK(actual == expected);

//         actual = make_bits(5, 3);
//         expected = 0x11111; // 1000100010001
//         CHECK(actual == expected);

//         actual = make_bits(4, 1);
//         expected = 0x55; // 1010101
//         CHECK(actual == expected);

//         actual = make_bits(4, 2);
//         expected = 0x249; // 1001001001
//         CHECK(actual == expected);
//     }
// }