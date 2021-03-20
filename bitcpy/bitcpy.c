/*
 * =====================================================================================
 *
 *       Filename:  bitcpy.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  廿廿一年三月廿日 廿二時44分49秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdint.h>

// the data store in computer is lower digit to higher digit
void bitcpy(void * _dest , 
            size_t _write , 
            const void *_src ,
            size_t _read ,
            size_t count){
    int _src_index = 0 , _dest_index = 0 ;
    int shift = count % 8 ;
    if(8 - _dest  > count){
      int model = 255;
      while(count-- > 0){
        
    
    
      }

    }


}

