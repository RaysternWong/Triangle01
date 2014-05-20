#include "unity.h"
#include "Triangle.h"


char *getTriangleName(int side1, int side2, int side3);



void setUp(void) {}



void tearDown(void) {}



void test_getTriangleName_given_2_2_3_should_return_isoscales(void) {

 char *name;



 name = getTriangleName(2, 2, 3);

 UnityAssertEqualString((const char*)("isoscales"), (const char*)(name), (((void *)0)), (_U_UINT)14);

}



void test_getTriangleName_given_2_3_3_should_return_isoscales(void) {

 char *name;



 name = getTriangleName(2, 3, 3);

 UnityAssertEqualString((const char*)("isoscales"), (const char*)(name), (((void *)0)), (_U_UINT)21);

}



void test_getTriangleName_given_3_2_3_should_return_isoscales(void) {

 char *name;



 name = getTriangleName(3, 2, 3);

 UnityAssertEqualString((const char*)("isoscales"), (const char*)(name), (((void *)0)), (_U_UINT)28);

}





void test_getTriangleName_given_1_2_3_should_return_scalene(void){



 char *name;



 name= getTriangleName(1,2,3);

 UnityAssertEqualString((const char*)("scalene"), (const char*)(name), (((void *)0)), (_U_UINT)37);

}
