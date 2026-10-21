#include <stddef.h>

const char* str_match(const char* s1, const char* s2) {
    
    if (*s2 == '\0') {
        return s1;
    }

    for (const char* p1 = s1; *p1 != '\0'; p1++) {
        const char* h = p1;
        const char* n = s2;

        // 一致する間、ポインタを進める
        while (*h != '\0' && *n != '\0' && *h == *n) {
            h++;
            n++;
        }

        
        if (*n == '\0') {
            return p1;
        }
    }

   
    return NULL;
}