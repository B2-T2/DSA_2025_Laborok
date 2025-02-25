//
// Created by Balazs Tamas on 2025. 02. 17
//

#ifndef FUNC_H_H
#define FUNC_H_H

/**
 * Szumma
 * @param a egyik szam
 * @param b masik szam
 * @return a+b
 */
int sum(int a,int b);

/**
 * Minimum megkeresese
 * @param a egyik szam
 * @param b masik szam
 * @param c harmadik szam
 * @return a legkisebb szam
 */
float min(float a, float b, float c);

/**
 * Dinamikus helyfoglalas\n
 * int *p = ez a fuggveny
 * @param n tomb cellainak szama
 * @return a lefogalt tomb kezdocime
 */
float* allocateMemoryForArray1(int n);

/**
 * Inkabb ne hasznald \n
 * De ez megcsinalja egy "pointer"-re hogy tomb legyen \n
 * (mutato a tombre)
 * @param n tomb elemeinek szama
 * @param dpArray az a mutato amit tombe alakit
 */
void allocateMemoryForArray2(int n, int **dpArray);

/**
 * Beolvas egy nxn Matrixot
 * @param pn a matrix merete (n)
 * @param dpArray Pointer ami utal a tombre
 * @param input beolvasando szoveg ""-ben
 */
void readArray(int *pn, int **dpArray, const char *input);

/**
 * Kiir egy karaktrelancot
 * @param n hany karaktert irjon ki
 * @param pArray pointer a tombre amibol ki kell irni
 * @param output a szoveg
 */
void printArray(int n, float *pArray, const char *output);

/**
 * Felszabaditja a tombot
 * @param dpArray tomb cime (pointer) amit fel akarunk szabaditani
 */
void deallocateMemoryForArray(int **dpArray);

/**
 * Random szammal tolti fel a tombot 2 tetszoleges ertek szerint
 * @param n a tomb elemeinek szama
 * @param pArray a tomb pointere
 * @param start a szam amitol akarjuk a randomizalast
 * @param end a leheto legnagyobb szam amivel randomizalhat
 */
void fillWithRandomNumbers(int n, float *pArray, int start, int end);
#endif //FUNC_H_H
