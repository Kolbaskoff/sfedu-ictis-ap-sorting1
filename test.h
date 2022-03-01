//
// Created by zaporozhec on 2/14/22.
//

#ifndef SFEDU_ICTIS_AP_SORTING_TEST_H
#define SFEDU_ICTIS_AP_SORTING_TEST_H
int TEST_ARRAY[] = {183, 86, 177, 115, 193, 135, 186, 92, 49, 21, 162, 27, 90, 59, 163, 126, 140, 26, 172, 136, 11,
                    168, 167, 29, 182, 130, 62, 123, 67, 135, 129, 2, 22, 58, 69, 167, 193, 56, 11, 42, 29, 173, 21,
                    119, 184, 137, 198, 124, 115, 170, 13, 126, 91, 180, 156, 73, 62, 170, 196, 81, 105, 125, 84,
                    127, 136, 105, 46, 129, 113, 57, 124, 95, 182, 145, 14, 167, 34, 164, 43, 150, 87, 8, 76, 178,
                    188, 184, 3, 51, 154, 199, 132, 60, 76, 168, 139, 12, 26, 186, 94, 139, 195, 170, 34, 178, 67,
                    1, 97, 102, 117, 92, 52, 156, 101, 80, 86, 41, 65, 89, 44, 19, 40, 129, 31, 117, 97, 171, 81,
                    75, 109, 127, 167, 56, 97, 153, 186, 165, 106, 83, 19, 24, 128, 71, 132, 29, 103, 19, 70, 168,
                    108, 115, 140, 149, 196, 123, 18, 45, 46, 51, 121, 155, 179, 88, 164, 28, 41, 150, 193, 100, 34,
                    164, 124, 114, 187, 56, 143, 91, 27, 165, 59, 136, 32, 151, 37, 28, 75, 7, 74, 121, 58, 195, 29,
                    37, 35, 193, 18, 28, 143, 11, 128, 129};

int CHECK_ARRAY[] = {1, 2, 3, 7, 8, 11, 11, 11, 12, 13, 14, 18, 18, 19, 19, 19, 21, 21, 22, 24, 26, 26, 27, 27, 28,
                     28, 28, 29, 29, 29, 29, 31, 32, 34, 34, 34, 35, 37, 37, 40, 41, 41, 42, 43, 44, 45, 46, 46, 49,
                     51, 51, 52, 56, 56, 56, 57, 58, 58, 59, 59, 60, 62, 62, 65, 67, 67, 69, 70, 71, 73, 74, 75, 75,
                     76, 76, 80, 81, 81, 83, 84, 86, 86, 87, 88, 89, 90, 91, 91, 92, 92, 94, 95, 97, 97, 97, 100,
                     101, 102, 103, 105, 105, 106, 108, 109, 113, 114, 115, 115, 115, 117, 117, 119, 121, 121, 123,
                     123, 124, 124, 124, 125, 126, 126, 127, 127, 128, 128, 129, 129, 129, 129, 130, 132, 132, 135,
                     135, 136, 136, 136, 137, 139, 139, 140, 140, 143, 143, 145, 149, 150, 150, 151, 153, 154, 155,
                     156, 156, 162, 163, 164, 164, 164, 165, 165, 167, 167, 167, 167, 168, 168, 168, 170, 170, 170,
                     171, 172, 173, 177, 178, 178, 179, 180, 182, 182, 183, 184, 184, 186, 186, 186, 187, 188, 193,
                     193, 193, 193, 195, 195, 196, 196, 198, 199};
const int TEST_ARRAY_SIZE = 200;

int TEST_SERIES_SIZE[] = {10, 100, 500, 1000, 5000, 10000, 50000};
int TEST_SERIES_NUM = sizeof( TEST_SERIES_SIZE )/sizeof( int );

#endif //SFEDU_ICTIS_AP_SORTING_TEST_H
