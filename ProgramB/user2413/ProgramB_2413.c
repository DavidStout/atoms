#include <stdio.h>
void F1(int V1, char *V2, int V3) {
   printf("a: %d %s %d\n", V1, V2, V3);
   int V4 = (V1 / V3) + V3;
   char *V5 = V2 - V1;
   V2 = V2 - 1;
   int V6 = (int)V2 / (int)V2;
   printf("b: %d %s %d\n", V4, V5, V6);
}
int V7;
int main() {
   /*for (; "ab"[V7] != 0;) {            //user notes claimed to fail understanding pointer usage
      F1(97 - 97, V7 + "zy", 122 / 122); //user notes claimed to fail understanding pointer arithmatic
      V7 = V7 + 1;
   }*/
   //printf("c\n");                      //user skipped final printf
}
