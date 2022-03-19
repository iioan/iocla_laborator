#include <stdio.h>

/**
 * Afisati adresele elementelor din vectorul "v" impreuna cu valorile
 * de la acestea.
 * Parcurgeti adresele, pe rand, din octet in octet,
 * din 2 in 2 octeti si apoi din 4 in 4.
 */

int main() {
    int v[] = {0xCAFEBABE, 0xDEADBEEF, 0x0B00B135, 0xBAADF00D, 0xDEADC0DE};
    unsigned char *char_ptr = (unsigned char*)v;
    int i = 0;
    while(i<20)
    {
        printf("%p -> 0x%x\n", char_ptr, *char_ptr);
        char_ptr++;
        i++;
    }
    printf("din doi in doi\n");
    i = 0;
    char_ptr = (unsigned char*)v;
    while(i<20)
    {
        printf("%p -> 0x%x\n", char_ptr, *char_ptr);
        char_ptr=char_ptr+2;
        i+=2;
    }
    printf("din patru in patru\n");
    i = 0;
    char_ptr = (unsigned char*)v;
    while(i<20)
    {
        printf("%p -> 0x%x\n", char_ptr, *char_ptr);
        char_ptr=char_ptr+4;
        i+=4;
    }
    

    (void) v;

    return 0;
}
