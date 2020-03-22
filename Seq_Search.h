/*Author : Yomna Ragab*/
#ifndef Seq_Search
#define Seq_Search
/*--> O(arr_length)*/
typedef enum{
  False=0,
  True=1
}enumCheck;

enumCheck SeqSearch(u32 *ptr , u32 value,u32 arr_length,u32 *position);
/*
  Func name: SeqSearch , it search sequentially into an array , to find a certain element.
  Arguments: ptr: pointer to unsigned 32-bit integer , it's a pointer to an array to be searched.
             value: unsigned 32-bit integer, the value wanted to be found.
             arr_length:  unsigned 32-bit integer, the array length.
             position: pointer to unsigned 32-bit integer, the position of the values
             in the array ,if the value was founded.
 Return: enumCheck , It return true if the value is exist in the array.
                    It return fale if the value is not exist in the array.

*/

#endif
