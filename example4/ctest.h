#ifndef CTEST_H
#define CTEST_H

typedef void (*ctest_t)(int *);

#ifdef __cplusplus
extern "C" {
#endif
  ctest_t ctest1;
  ctest_t ctest2;
   
#ifdef __cplusplus
}
#endif
 
#endif
