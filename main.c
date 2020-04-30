#include <16f84a.h>
#fuses xt
#use delay (clock=4M)
#BYTE TRISA=0x85
#define retardo delay_ms(250)

void main()
{

   TRISA=0x00000;
   output_a(0);
   int i;
   for(;;)
   {
   inicio:for(i=0;i<10;i++)
   {
   output_a(i);
   retardo;
   if(i==9)
   {
   i=0;
   goto inicio;
   }
   }
   }

}
