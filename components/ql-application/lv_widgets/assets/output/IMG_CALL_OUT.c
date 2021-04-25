#if defined(PLATFORM_EC600)
    #include "lvgl.h"
    #else
    #include "lvgl/lvgl.h"
    #endif

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_IMG_CALL_OUT
#define LV_ATTRIBUTE_IMG_IMG_CALL_OUT
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_IMG_IMG_CALL_OUT uint8_t IMG_CALL_OUT_map[] = {
#if LV_COLOR_DEPTH == 1 || LV_COLOR_DEPTH == 8
  /*Pixel format: Blue: 2 bit, Green: 3 bit, Red: 3 bit, Alpha 8 bit */
  0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0x3f, 0x00, 0x1f, 0x77, 0x1f, 0x20, 0x1f, 0x00, 0x1f, 0x00, 0x1f, 0x00, 0x1f, 0x00, 0x1f, 0x00, 0x1f, 0x00, 0x1f, 0x00, 0x1f, 0x00, 0x1f, 0x00, 0x1f, 0x00, 
  0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0x1f, 0x00, 0x1f, 0x50, 0x1f, 0xf7, 0x1f, 0x77, 0x1f, 0x04, 0x1f, 0x00, 0x1f, 0x00, 0x1f, 0x00, 0x1f, 0x00, 0x1f, 0x00, 0x1f, 0x00, 0x1f, 0x00, 0x1f, 0x00, 
  0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0x3f, 0x00, 0x1f, 0x04, 0x1f, 0xe0, 0x1f, 0xff, 0x1f, 0xd0, 0x1f, 0x37, 0x1f, 0x00, 0x1f, 0x00, 0x1f, 0x00, 0x1f, 0x00, 0x1f, 0x00, 0x1f, 0x00, 0x1f, 0x00, 
  0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0x1f, 0x00, 0x1f, 0x00, 0x1f, 0x78, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0xfc, 0x1f, 0x93, 0x1f, 0x0f, 0x1f, 0x00, 0x1f, 0x00, 0x1f, 0x00, 0x1f, 0x00, 0x1f, 0x00, 
  0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0x3f, 0x00, 0x1f, 0x00, 0x1f, 0x14, 0x1f, 0xf7, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0xe4, 0x1f, 0x53, 0x1f, 0x00, 0x1f, 0x00, 0x1f, 0x00, 0x1f, 0x00, 
  0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0x3f, 0x00, 0x1f, 0x00, 0x3f, 0x00, 0x1f, 0x00, 0x3f, 0x00, 0x1f, 0x00, 0x1f, 0x00, 0x1f, 0x00, 0x1f, 0x00, 0x1f, 0x00, 0x1f, 0xa0, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0xb3, 0x1f, 0x1c, 0x1f, 0x00, 0x1f, 0x00, 
  0x3f, 0xc3, 0x1f, 0xff, 0x3f, 0xff, 0x1f, 0xff, 0x3f, 0xff, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0xfc, 0x1f, 0x70, 0x1f, 0x04, 
  0x1f, 0xff, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0x98, 
  0x1f, 0xc3, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0xfc, 0x1f, 0x70, 0x1f, 0x04, 
  0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0x3f, 0x00, 0x1f, 0x00, 0x1f, 0x00, 0x1f, 0x00, 0x1f, 0x00, 0x1f, 0x00, 0x1f, 0x00, 0x1f, 0x00, 0x1f, 0x00, 0x1f, 0x00, 0x1f, 0xa0, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0xb3, 0x1f, 0x1f, 0x1f, 0x00, 0x1f, 0x00, 
  0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0x3f, 0x00, 0x1f, 0x00, 0x1f, 0x14, 0x1f, 0xf7, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0xe4, 0x1f, 0x53, 0x1f, 0x00, 0x1f, 0x00, 0x1f, 0x00, 0x1f, 0x00, 
  0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0x1f, 0x00, 0x1f, 0x00, 0x1f, 0x78, 0x1f, 0xff, 0x1f, 0xff, 0x1f, 0xfc, 0x1f, 0x94, 0x1f, 0x0f, 0x1f, 0x00, 0x1f, 0x00, 0x1f, 0x00, 0x1f, 0x00, 0x1f, 0x00, 
  0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0x3f, 0x00, 0x1f, 0x04, 0x1f, 0xe0, 0x1f, 0xff, 0x1f, 0xd0, 0x1f, 0x37, 0x1f, 0x00, 0x1f, 0x00, 0x1f, 0x00, 0x1f, 0x00, 0x1f, 0x00, 0x1f, 0x00, 0x1f, 0x00, 
  0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0x1f, 0x00, 0x1f, 0x50, 0x1f, 0xf7, 0x1f, 0x77, 0x1f, 0x04, 0x1f, 0x00, 0x1f, 0x00, 0x1f, 0x00, 0x1f, 0x00, 0x1f, 0x00, 0x1f, 0x00, 0x1f, 0x00, 0x1f, 0x00, 
  0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0x3f, 0x00, 0x1f, 0x77, 0x1f, 0x20, 0x1f, 0x00, 0x1f, 0x00, 0x1f, 0x00, 0x1f, 0x00, 0x1f, 0x00, 0x1f, 0x00, 0x1f, 0x00, 0x1f, 0x00, 0x1f, 0x00, 0x1f, 0x00, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP == 0
  /*Pixel format: Blue: 5 bit, Green: 6 bit, Red: 5 bit, Alpha 8 bit*/
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0x07, 0x00, 0xff, 0x07, 0x77, 0xff, 0x07, 0x20, 0xff, 0x07, 0x00, 0xff, 0x07, 0x00, 0xff, 0x07, 0x00, 0xff, 0x07, 0x00, 0xff, 0x07, 0x00, 0xff, 0x07, 0x00, 0xff, 0x07, 0x00, 0xff, 0x07, 0x00, 0xff, 0x07, 0x00, 0xff, 0x07, 0x00, 
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xbf, 0x0f, 0x00, 0xbf, 0x07, 0x50, 0xbf, 0x07, 0xf7, 0xbf, 0x07, 0x77, 0xbf, 0x07, 0x04, 0xbf, 0x07, 0x00, 0xbf, 0x07, 0x00, 0xbf, 0x07, 0x00, 0xbf, 0x07, 0x00, 0xbf, 0x07, 0x00, 0xbf, 0x07, 0x00, 0xbf, 0x07, 0x00, 0xbf, 0x07, 0x00, 
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xdf, 0x07, 0x00, 0xdf, 0x07, 0x04, 0xdf, 0x07, 0xe0, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xd0, 0xdf, 0x07, 0x37, 0xdf, 0x07, 0x00, 0xdf, 0x07, 0x00, 0xdf, 0x07, 0x00, 0xdf, 0x07, 0x00, 0xdf, 0x07, 0x00, 0xdf, 0x07, 0x00, 0xdf, 0x07, 0x00, 
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xdf, 0x0f, 0x00, 0xdf, 0x07, 0x00, 0xdf, 0x07, 0x78, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xfc, 0xdf, 0x07, 0x93, 0xdf, 0x07, 0x0f, 0xdf, 0x07, 0x00, 0xdf, 0x07, 0x00, 0xdf, 0x07, 0x00, 0xdf, 0x07, 0x00, 0xdf, 0x07, 0x00, 
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xdf, 0x07, 0x00, 0xdf, 0x07, 0x00, 0xdf, 0x07, 0x14, 0xdf, 0x07, 0xf7, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xe4, 0xdf, 0x07, 0x53, 0xdf, 0x07, 0x00, 0xdf, 0x07, 0x00, 0xdf, 0x07, 0x00, 0xdf, 0x07, 0x00, 
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xdf, 0x0f, 0x00, 0xdf, 0x07, 0x00, 0xdf, 0x0f, 0x00, 0xdf, 0x07, 0x00, 0xdf, 0x0f, 0x00, 0xdf, 0x07, 0x00, 0xdf, 0x0f, 0x00, 0xdf, 0x07, 0x00, 0xdf, 0x07, 0x00, 0xdf, 0x07, 0x00, 0xdf, 0x07, 0xa0, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xb3, 0xdf, 0x07, 0x1c, 0xdf, 0x07, 0x00, 0xdf, 0x07, 0x00, 
  0xdf, 0x0f, 0xc3, 0xdf, 0x07, 0xff, 0xdf, 0x0f, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x0f, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xfc, 0xdf, 0x07, 0x70, 0xdf, 0x07, 0x04, 
  0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0x98, 
  0xdf, 0x07, 0xc3, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xfc, 0xdf, 0x07, 0x70, 0xdf, 0x07, 0x04, 
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xdf, 0x0f, 0x00, 0xdf, 0x07, 0x00, 0xdf, 0x07, 0x00, 0xdf, 0x07, 0x00, 0xdf, 0x07, 0x00, 0xdf, 0x07, 0x00, 0xdf, 0x07, 0x00, 0xdf, 0x07, 0x00, 0xdf, 0x07, 0x00, 0xdf, 0x07, 0x00, 0xdf, 0x07, 0xa0, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xb3, 0xdf, 0x07, 0x1f, 0xdf, 0x07, 0x00, 0xdf, 0x07, 0x00, 
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xdf, 0x0f, 0x00, 0xdf, 0x07, 0x00, 0xdf, 0x07, 0x14, 0xdf, 0x07, 0xf7, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xe4, 0xdf, 0x07, 0x53, 0xdf, 0x07, 0x00, 0xdf, 0x07, 0x00, 0xdf, 0x07, 0x00, 0xdf, 0x07, 0x00, 
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xdf, 0x07, 0x00, 0xdf, 0x07, 0x00, 0xdf, 0x07, 0x78, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xfc, 0xdf, 0x07, 0x94, 0xdf, 0x07, 0x0f, 0xdf, 0x07, 0x00, 0xdf, 0x07, 0x00, 0xdf, 0x07, 0x00, 0xdf, 0x07, 0x00, 0xdf, 0x07, 0x00, 
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xdf, 0x0f, 0x00, 0xdf, 0x07, 0x04, 0xdf, 0x07, 0xe0, 0xdf, 0x07, 0xff, 0xdf, 0x07, 0xd0, 0xdf, 0x07, 0x37, 0xdf, 0x07, 0x00, 0xdf, 0x07, 0x00, 0xdf, 0x07, 0x00, 0xdf, 0x07, 0x00, 0xdf, 0x07, 0x00, 0xdf, 0x07, 0x00, 0xdf, 0x07, 0x00, 
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xdf, 0x07, 0x00, 0xdf, 0x07, 0x50, 0xdf, 0x07, 0xf7, 0xdf, 0x07, 0x77, 0xdf, 0x07, 0x04, 0xdf, 0x07, 0x00, 0xdf, 0x07, 0x00, 0xdf, 0x07, 0x00, 0xdf, 0x07, 0x00, 0xdf, 0x07, 0x00, 0xdf, 0x07, 0x00, 0xdf, 0x07, 0x00, 0xdf, 0x07, 0x00, 
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xdf, 0x0f, 0x00, 0xdf, 0x07, 0x77, 0xdf, 0x07, 0x20, 0xdf, 0x07, 0x00, 0xdf, 0x07, 0x00, 0xdf, 0x07, 0x00, 0xdf, 0x07, 0x00, 0xdf, 0x07, 0x00, 0xdf, 0x07, 0x00, 0xdf, 0x07, 0x00, 0xdf, 0x07, 0x00, 0xdf, 0x07, 0x00, 0xdf, 0x07, 0x00, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP != 0
  /*Pixel format:  Blue: 5 bit Green: 6 bit, Red: 5 bit, Alpha 8 bit  BUT the 2  color bytes are swapped*/
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x77, 0x07, 0xdf, 0x20, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x00, 
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0x0f, 0xdf, 0x00, 0x07, 0xdf, 0x50, 0x07, 0xdf, 0xf7, 0x07, 0xdf, 0x77, 0x07, 0xdf, 0x04, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x00, 
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x04, 0x07, 0xdf, 0xe0, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xd0, 0x07, 0xdf, 0x37, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x00, 
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0x0f, 0xdf, 0x00, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x78, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xfc, 0x07, 0xdf, 0x93, 0x07, 0xdf, 0x0f, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x00, 
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x14, 0x07, 0xdf, 0xf7, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xe4, 0x07, 0xdf, 0x53, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x00, 
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0x0f, 0xdf, 0x00, 0x07, 0xdf, 0x00, 0x0f, 0xdf, 0x00, 0x07, 0xdf, 0x00, 0x0f, 0xdf, 0x00, 0x07, 0xdf, 0x00, 0x0f, 0xdf, 0x00, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0xa0, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xb3, 0x07, 0xdf, 0x1c, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x00, 
  0x0f, 0xdf, 0xc3, 0x07, 0xdf, 0xff, 0x0f, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x0f, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xfc, 0x07, 0xdf, 0x70, 0x07, 0xdf, 0x04, 
  0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0x98, 
  0x07, 0xdf, 0xc3, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xfc, 0x07, 0xdf, 0x70, 0x07, 0xdf, 0x04, 
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0x0f, 0xdf, 0x00, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0xa0, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xb3, 0x07, 0xdf, 0x1f, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x00, 
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0x0f, 0xdf, 0x00, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x14, 0x07, 0xdf, 0xf7, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xe4, 0x07, 0xdf, 0x53, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x00, 
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x78, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xfc, 0x07, 0xdf, 0x94, 0x07, 0xdf, 0x0f, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x00, 
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0x0f, 0xdf, 0x00, 0x07, 0xdf, 0x04, 0x07, 0xdf, 0xe0, 0x07, 0xdf, 0xff, 0x07, 0xdf, 0xd0, 0x07, 0xdf, 0x37, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x00, 
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x50, 0x07, 0xdf, 0xf7, 0x07, 0xdf, 0x77, 0x07, 0xdf, 0x04, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x00, 
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0x0f, 0xdf, 0x00, 0x07, 0xdf, 0x77, 0x07, 0xdf, 0x20, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x00, 0x07, 0xdf, 0x00, 
#endif
#if LV_COLOR_DEPTH == 32
  /*Pixel format:  Blue: 8 bit, Green: 8 bit, Red: 8 bit, Alpha: 8 bit*/
  0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xf7, 0x00, 0x00, 0xff, 0xf7, 0x04, 0x77, 0xff, 0xf7, 0x02, 0x20, 0xff, 0xf7, 0x03, 0x00, 0xff, 0xf7, 0x03, 0x00, 0xff, 0xf7, 0x03, 0x00, 0xff, 0xf7, 0x03, 0x00, 0xff, 0xf7, 0x03, 0x00, 0xff, 0xf7, 0x03, 0x00, 0xff, 0xf7, 0x03, 0x00, 0xff, 0xf7, 0x03, 0x00, 0xff, 0xf7, 0x03, 0x00, 0xff, 0xf7, 0x03, 0x00, 
  0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xf7, 0x03, 0x00, 0xff, 0xf7, 0x01, 0x50, 0xff, 0xf7, 0x02, 0xf7, 0xff, 0xf7, 0x02, 0x77, 0xff, 0xf7, 0x02, 0x04, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x00, 
  0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x04, 0xff, 0xf7, 0x02, 0xe0, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xd0, 0xff, 0xf7, 0x02, 0x37, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x00, 
  0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x78, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xfc, 0xff, 0xf7, 0x02, 0x93, 0xff, 0xf7, 0x02, 0x0f, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x00, 
  0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x14, 0xff, 0xf7, 0x02, 0xf7, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xe4, 0xff, 0xf7, 0x02, 0x53, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x00, 
  0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0xa0, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xb3, 0xff, 0xf7, 0x02, 0x1c, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x00, 
  0xff, 0xf7, 0x02, 0xc3, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xfc, 0xff, 0xf7, 0x02, 0x70, 0xff, 0xf7, 0x02, 0x04, 
  0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0x98, 
  0xff, 0xf7, 0x02, 0xc3, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xfc, 0xff, 0xf7, 0x02, 0x70, 0xff, 0xf7, 0x02, 0x04, 
  0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0xa0, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xb3, 0xff, 0xf7, 0x02, 0x1f, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x00, 
  0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x14, 0xff, 0xf7, 0x02, 0xf7, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xe4, 0xff, 0xf7, 0x02, 0x53, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x00, 
  0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x78, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xfc, 0xff, 0xf7, 0x02, 0x94, 0xff, 0xf7, 0x02, 0x0f, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x00, 
  0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x04, 0xff, 0xf7, 0x02, 0xe0, 0xff, 0xf7, 0x02, 0xff, 0xff, 0xf7, 0x02, 0xd0, 0xff, 0xf7, 0x02, 0x37, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x00, 
  0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x50, 0xff, 0xf7, 0x02, 0xf7, 0xff, 0xf7, 0x02, 0x77, 0xff, 0xf7, 0x02, 0x04, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x00, 
  0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x77, 0xff, 0xf7, 0x02, 0x20, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x00, 0xff, 0xf7, 0x02, 0x00, 
#endif
};

const lv_img_dsc_t IMG_CALL_OUT = {
  .header.always_zero = 0,
  .header.w = 27,
  .header.h = 15,
  .data_size = 405 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
  .data = IMG_CALL_OUT_map,
};