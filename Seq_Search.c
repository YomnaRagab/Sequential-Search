/*Author : Yomna Ragab*/
#include "std_types.h"
#include "Seq_Search.h"

enumCheck SeqSearch(u32 *ptr , u32 value,u32 arr_length,u32 *position)
{
  enumCheck status=False;
  *position='\0';
  u32 counter=0;
  for (counter=0; counter<arr_length; counter++)
  {
    if(ptr[counter]==value)
    {
      status=True;
      *position=counter;
      break;
    }
  }
  return(status);
}

/*******************************TEST*************************************/
#include <stdio.h>
void main(void)
{
  u32 arr[10]={3,62,11,53,88,302,1,5,29,48};
  u32 i;
  enumCheck status= SeqSearch(arr , 100,10,&i);
  if(status==True)  printf("okay , %d",i);
  else              printf("NOkay, %d",i);

}
