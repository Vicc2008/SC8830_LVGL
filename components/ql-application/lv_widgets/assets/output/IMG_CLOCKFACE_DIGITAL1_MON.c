#if defined(PLATFORM_EC600)
    #include "lvgl.h"
    #else
    #include "lvgl/lvgl.h"
    #endif

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_IMG_CLOCKFACE_DIGITAL1_MON
#define LV_ATTRIBUTE_IMG_IMG_CLOCKFACE_DIGITAL1_MON
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_IMG_IMG_CLOCKFACE_DIGITAL1_MON uint8_t IMG_CLOCKFACE_DIGITAL1_MON_map[] = {
#if LV_COLOR_DEPTH == 1 || LV_COLOR_DEPTH == 8
  /*Pixel format: Blue: 2 bit, Green: 3 bit, Red: 3 bit, Alpha 8 bit */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe7, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0xe7, 0x54, 0xc7, 0xef, 0xe7, 0x98, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe7, 0xbb, 0xc7, 0xef, 0xe7, 0x33, 0x00, 0x00, 0x00, 0x00, 0xe7, 0x10, 0xc7, 0x88, 0xe7, 0xdc, 0xc7, 0xff, 0xe7, 0xdc, 0xc7, 0x88, 0x00, 0x00, 0x00, 0x00, 0xe7, 0x67, 0xc7, 0xef, 0xe7, 0x54, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe7, 0x98, 0xc7, 0xdc, 0x00, 0x00, 
  0x00, 0x00, 0xe7, 0xab, 0xcb, 0xff, 0xe7, 0xff, 0xc7, 0x33, 0x00, 0x00, 0xc7, 0x44, 0xeb, 0xff, 0xc7, 0xff, 0xe7, 0x88, 0x00, 0x00, 0x00, 0x00, 0xe7, 0xbb, 0xcb, 0xff, 0xe7, 0xdc, 0xcb, 0xcc, 0xe7, 0xdc, 0xe7, 0xff, 0xc7, 0xbb, 0x01, 0x00, 0xe7, 0x88, 0xcb, 0xff, 0xe7, 0xef, 0xc7, 0x10, 0x00, 0x00, 0x00, 0x00, 0xe7, 0xcc, 0xe7, 0xff, 0xc7, 0x10, 
  0x00, 0x00, 0xe7, 0xcc, 0xc7, 0xff, 0xeb, 0xff, 0xe7, 0x77, 0x01, 0x00, 0xe7, 0x98, 0xc7, 0xff, 0xeb, 0xff, 0xc7, 0xbb, 0x00, 0x00, 0xc7, 0x77, 0xe7, 0xff, 0xc7, 0xcc, 0xe7, 0x10, 0x01, 0x00, 0xc7, 0x10, 0xeb, 0xbb, 0xe7, 0xff, 0xc7, 0x77, 0xe7, 0x88, 0xc7, 0xff, 0xeb, 0xff, 0xe7, 0xbb, 0x00, 0x00, 0x00, 0x00, 0xc7, 0xcc, 0xeb, 0xff, 0xe7, 0x10, 
  0xc7, 0x10, 0xeb, 0xff, 0xc7, 0xdc, 0xe7, 0xef, 0xc7, 0xbb, 0x00, 0x00, 0xe7, 0xcc, 0xc7, 0xdc, 0xe7, 0xff, 0xe7, 0xcc, 0x01, 0x00, 0xe7, 0xbb, 0xcb, 0xff, 0xe7, 0x67, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc7, 0x67, 0xeb, 0xff, 0xc7, 0xab, 0xeb, 0x88, 0xc7, 0xff, 0xe7, 0xcc, 0xc7, 0xff, 0xe7, 0x88, 0x01, 0x00, 0xe7, 0xcc, 0xc7, 0xff, 0xe7, 0x10, 
  0xe7, 0x33, 0xc7, 0xff, 0xeb, 0xcc, 0xc7, 0xbb, 0xe7, 0xff, 0xc7, 0x44, 0xeb, 0xff, 0xc7, 0x98, 0xeb, 0xcc, 0xc7, 0xff, 0xe7, 0x10, 0xc7, 0xcc, 0xe7, 0xff, 0xc7, 0x54, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe7, 0x33, 0xc7, 0xff, 0xe7, 0xcc, 0xc7, 0x88, 0xeb, 0xff, 0xc7, 0x54, 0xeb, 0xcc, 0xc7, 0xff, 0xe7, 0x54, 0xcb, 0xcc, 0xe7, 0xff, 0xc7, 0x10, 
  0xe7, 0x54, 0xc7, 0xff, 0xe7, 0x98, 0xcb, 0x77, 0xe7, 0xff, 0xc7, 0xcc, 0xe7, 0xff, 0xc7, 0x67, 0xe7, 0xcc, 0xcb, 0xff, 0xe7, 0x44, 0xcb, 0xbb, 0xe7, 0xff, 0xe7, 0x67, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe7, 0x54, 0xcb, 0xff, 0xe7, 0xbb, 0xc7, 0x88, 0xe7, 0xff, 0xc7, 0x54, 0xe7, 0x23, 0xcb, 0xef, 0xe7, 0xef, 0xc7, 0xcc, 0xeb, 0xff, 0xe7, 0x10, 
  0xe7, 0x88, 0xcb, 0xff, 0xe7, 0x88, 0xc7, 0x33, 0xeb, 0xff, 0xc7, 0xff, 0xeb, 0xef, 0x01, 0x00, 0xe7, 0x88, 0xc7, 0xff, 0xe7, 0x54, 0xc7, 0x77, 0xeb, 0xff, 0xc7, 0xab, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe7, 0xab, 0xc7, 0xff, 0xeb, 0x77, 0xc7, 0x88, 0xeb, 0xff, 0xc7, 0x54, 0x01, 0x00, 0xe7, 0x67, 0xcb, 0xff, 0xe7, 0xff, 0xc7, 0xff, 0xe7, 0x10, 
  0xe7, 0xab, 0xc7, 0xff, 0xeb, 0x54, 0x01, 0x00, 0xe7, 0xcc, 0xc7, 0xff, 0xe7, 0xbb, 0x00, 0x00, 0xe7, 0x77, 0xcb, 0xff, 0xe7, 0x88, 0x01, 0x00, 0xe7, 0xcc, 0xe7, 0xff, 0xc7, 0xdc, 0xe7, 0x88, 0xc7, 0xcc, 0xeb, 0xff, 0xc7, 0xcc, 0x01, 0x00, 0xe7, 0x88, 0xc7, 0xff, 0xe7, 0x54, 0x00, 0x00, 0x00, 0x00, 0xe7, 0x88, 0xcb, 0xff, 0xe7, 0xff, 0xc7, 0x10, 
  0xe7, 0x98, 0xc7, 0xef, 0xe7, 0x23, 0x00, 0x00, 0xe7, 0x77, 0xcb, 0xff, 0xe7, 0x67, 0x01, 0x00, 0xe7, 0x44, 0xc7, 0xff, 0xe7, 0x77, 0x00, 0x00, 0xc7, 0x10, 0xeb, 0x98, 0xc7, 0xef, 0xeb, 0xff, 0xc7, 0xef, 0xe7, 0xab, 0xe7, 0x10, 0x00, 0x00, 0xe7, 0x77, 0xcb, 0xff, 0xe7, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe7, 0xbb, 0xcb, 0xef, 0x01, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe7, 0x10, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe7, 0x10, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe7, 0x10, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe7, 0x10, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP == 0
  /*Pixel format: Blue: 5 bit, Green: 6 bit, Red: 5 bit, Alpha 8 bit*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5f, 0xd1, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x5f, 0xd1, 0x54, 0x5f, 0xd1, 0xef, 0x5f, 0xd1, 0x98, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5f, 0xd1, 0xbb, 0x5f, 0xd1, 0xef, 0x5f, 0xd1, 0x33, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5f, 0xd1, 0x10, 0x5f, 0xd1, 0x88, 0x5f, 0xd1, 0xdc, 0x5f, 0xd1, 0xff, 0x5f, 0xd1, 0xdc, 0x5f, 0xd1, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5f, 0xd1, 0x67, 0x5f, 0xd1, 0xef, 0x5f, 0xd1, 0x54, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5f, 0xd1, 0x98, 0x5f, 0xd1, 0xdc, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x5f, 0xd1, 0xab, 0x5f, 0xd1, 0xff, 0x5f, 0xd1, 0xff, 0x5f, 0xd1, 0x33, 0x00, 0x00, 0x00, 0x5f, 0xd1, 0x44, 0x5f, 0xd1, 0xff, 0x5f, 0xd1, 0xff, 0x5f, 0xd1, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5f, 0xd1, 0xbb, 0x5f, 0xd1, 0xff, 0x5f, 0xd1, 0xdc, 0x5f, 0xd1, 0xcc, 0x5f, 0xd1, 0xdc, 0x5f, 0xd1, 0xff, 0x5f, 0xd1, 0xbb, 0x00, 0x00, 0x00, 0x5f, 0xd1, 0x88, 0x5f, 0xd1, 0xff, 0x5f, 0xd1, 0xef, 0x5f, 0xd1, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5f, 0xd1, 0xcc, 0x5f, 0xd1, 0xff, 0x5f, 0xd1, 0x10, 
  0x00, 0x00, 0x00, 0x5f, 0xd1, 0xcc, 0x5f, 0xd1, 0xff, 0x5f, 0xd1, 0xff, 0x5f, 0xd1, 0x77, 0x00, 0x00, 0x00, 0x5f, 0xd1, 0x98, 0x5f, 0xd1, 0xff, 0x5f, 0xd1, 0xff, 0x5f, 0xd1, 0xbb, 0x00, 0x00, 0x00, 0x5f, 0xd1, 0x77, 0x5f, 0xd1, 0xff, 0x5f, 0xd1, 0xcc, 0x5f, 0xd1, 0x10, 0x01, 0x00, 0x00, 0x5f, 0xd1, 0x10, 0x5f, 0xd1, 0xbb, 0x5f, 0xd1, 0xff, 0x5f, 0xd1, 0x77, 0x5f, 0xd1, 0x88, 0x5f, 0xd1, 0xff, 0x5f, 0xd1, 0xff, 0x5f, 0xd1, 0xbb, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5f, 0xd1, 0xcc, 0x5f, 0xd1, 0xff, 0x5f, 0xd1, 0x10, 
  0x5f, 0xd1, 0x10, 0x5f, 0xd1, 0xff, 0x5f, 0xd1, 0xdc, 0x5f, 0xd1, 0xef, 0x5f, 0xd1, 0xbb, 0x00, 0x00, 0x00, 0x5f, 0xd1, 0xcc, 0x5f, 0xd1, 0xdc, 0x5f, 0xd1, 0xff, 0x5f, 0xd1, 0xcc, 0x00, 0x00, 0x00, 0x5f, 0xd1, 0xbb, 0x5f, 0xd1, 0xff, 0x5f, 0xd1, 0x67, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5f, 0xd1, 0x67, 0x5f, 0xd1, 0xff, 0x5f, 0xd1, 0xab, 0x5f, 0xd1, 0x88, 0x5f, 0xd1, 0xff, 0x5f, 0xd1, 0xcc, 0x5f, 0xd1, 0xff, 0x5f, 0xd1, 0x88, 0x00, 0x00, 0x00, 0x5f, 0xd1, 0xcc, 0x5f, 0xd1, 0xff, 0x5f, 0xd1, 0x10, 
  0x5f, 0xd1, 0x33, 0x5f, 0xd1, 0xff, 0x5f, 0xd1, 0xcc, 0x5f, 0xd1, 0xbb, 0x5f, 0xd1, 0xff, 0x5f, 0xd1, 0x44, 0x5f, 0xd1, 0xff, 0x5f, 0xd1, 0x98, 0x5f, 0xd1, 0xcc, 0x5f, 0xd1, 0xff, 0x5f, 0xd1, 0x10, 0x5f, 0xd1, 0xcc, 0x5f, 0xd1, 0xff, 0x5f, 0xd1, 0x54, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5f, 0xd1, 0x33, 0x5f, 0xd1, 0xff, 0x5f, 0xd1, 0xcc, 0x5f, 0xd1, 0x88, 0x5f, 0xd1, 0xff, 0x5f, 0xd1, 0x54, 0x5f, 0xd1, 0xcc, 0x5f, 0xd1, 0xff, 0x5f, 0xd1, 0x54, 0x5f, 0xd1, 0xcc, 0x5f, 0xd1, 0xff, 0x5f, 0xd1, 0x10, 
  0x5f, 0xd1, 0x54, 0x5f, 0xd1, 0xff, 0x5f, 0xd1, 0x98, 0x5f, 0xd1, 0x77, 0x5f, 0xd1, 0xff, 0x5f, 0xd1, 0xcc, 0x5f, 0xd1, 0xff, 0x5f, 0xd1, 0x67, 0x5f, 0xd1, 0xcc, 0x5f, 0xd1, 0xff, 0x5f, 0xd1, 0x44, 0x5f, 0xd1, 0xbb, 0x5f, 0xd1, 0xff, 0x5f, 0xd1, 0x67, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5f, 0xd1, 0x54, 0x5f, 0xd1, 0xff, 0x5f, 0xd1, 0xbb, 0x5f, 0xd1, 0x88, 0x5f, 0xd1, 0xff, 0x5f, 0xd1, 0x54, 0x5f, 0xd1, 0x23, 0x5f, 0xd1, 0xef, 0x5f, 0xd1, 0xef, 0x5f, 0xd1, 0xcc, 0x5f, 0xd1, 0xff, 0x5f, 0xd1, 0x10, 
  0x5f, 0xd1, 0x88, 0x5f, 0xd1, 0xff, 0x5f, 0xd1, 0x88, 0x5f, 0xd1, 0x33, 0x5f, 0xd1, 0xff, 0x5f, 0xd1, 0xff, 0x5f, 0xd1, 0xef, 0x01, 0x00, 0x00, 0x5f, 0xd1, 0x88, 0x5f, 0xd1, 0xff, 0x5f, 0xd1, 0x54, 0x5f, 0xd1, 0x77, 0x5f, 0xd1, 0xff, 0x5f, 0xd1, 0xab, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5f, 0xd1, 0xab, 0x5f, 0xd1, 0xff, 0x5f, 0xd1, 0x77, 0x5f, 0xd1, 0x88, 0x5f, 0xd1, 0xff, 0x5f, 0xd1, 0x54, 0x01, 0x00, 0x00, 0x5f, 0xd1, 0x67, 0x5f, 0xd1, 0xff, 0x5f, 0xd1, 0xff, 0x5f, 0xd1, 0xff, 0x5f, 0xd1, 0x10, 
  0x5f, 0xd1, 0xab, 0x5f, 0xd1, 0xff, 0x5f, 0xd1, 0x54, 0x01, 0x00, 0x00, 0x5f, 0xd1, 0xcc, 0x5f, 0xd1, 0xff, 0x5f, 0xd1, 0xbb, 0x00, 0x00, 0x00, 0x5f, 0xd1, 0x77, 0x5f, 0xd1, 0xff, 0x5f, 0xd1, 0x88, 0x01, 0x00, 0x00, 0x5f, 0xd1, 0xcc, 0x5f, 0xd1, 0xff, 0x5f, 0xd1, 0xdc, 0x5f, 0xd1, 0x88, 0x5f, 0xd1, 0xcc, 0x5f, 0xd1, 0xff, 0x5f, 0xd1, 0xcc, 0x01, 0x00, 0x00, 0x5f, 0xd1, 0x88, 0x5f, 0xd1, 0xff, 0x5f, 0xd1, 0x54, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5f, 0xd1, 0x88, 0x5f, 0xd1, 0xff, 0x5f, 0xd1, 0xff, 0x5f, 0xd1, 0x10, 
  0x5f, 0xd1, 0x98, 0x5f, 0xd1, 0xef, 0x5f, 0xd1, 0x23, 0x00, 0x00, 0x00, 0x5f, 0xd1, 0x77, 0x5f, 0xd1, 0xff, 0x5f, 0xd1, 0x67, 0x00, 0x00, 0x00, 0x5f, 0xd1, 0x44, 0x5f, 0xd1, 0xff, 0x5f, 0xd1, 0x77, 0x00, 0x00, 0x00, 0x5f, 0xd1, 0x10, 0x5f, 0xd1, 0x98, 0x5f, 0xd1, 0xef, 0x5f, 0xd1, 0xff, 0x5f, 0xd1, 0xef, 0x5f, 0xd1, 0xab, 0x5f, 0xd1, 0x10, 0x00, 0x00, 0x00, 0x5f, 0xd1, 0x77, 0x5f, 0xd1, 0xff, 0x5f, 0xd1, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5f, 0xd1, 0xbb, 0x5f, 0xd1, 0xef, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5f, 0xd1, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5f, 0xd1, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5f, 0xd1, 0x10, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5f, 0xd1, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP != 0
  /*Pixel format:  Blue: 5 bit Green: 6 bit, Red: 5 bit, Alpha 8 bit  BUT the 2  color bytes are swapped*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd1, 0x5f, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xd1, 0x5f, 0x54, 0xd1, 0x5f, 0xef, 0xd1, 0x5f, 0x98, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd1, 0x5f, 0xbb, 0xd1, 0x5f, 0xef, 0xd1, 0x5f, 0x33, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd1, 0x5f, 0x10, 0xd1, 0x5f, 0x88, 0xd1, 0x5f, 0xdc, 0xd1, 0x5f, 0xff, 0xd1, 0x5f, 0xdc, 0xd1, 0x5f, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd1, 0x5f, 0x67, 0xd1, 0x5f, 0xef, 0xd1, 0x5f, 0x54, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd1, 0x5f, 0x98, 0xd1, 0x5f, 0xdc, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xd1, 0x5f, 0xab, 0xd1, 0x5f, 0xff, 0xd1, 0x5f, 0xff, 0xd1, 0x5f, 0x33, 0x00, 0x00, 0x00, 0xd1, 0x5f, 0x44, 0xd1, 0x5f, 0xff, 0xd1, 0x5f, 0xff, 0xd1, 0x5f, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd1, 0x5f, 0xbb, 0xd1, 0x5f, 0xff, 0xd1, 0x5f, 0xdc, 0xd1, 0x5f, 0xcc, 0xd1, 0x5f, 0xdc, 0xd1, 0x5f, 0xff, 0xd1, 0x5f, 0xbb, 0x00, 0x00, 0x00, 0xd1, 0x5f, 0x88, 0xd1, 0x5f, 0xff, 0xd1, 0x5f, 0xef, 0xd1, 0x5f, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd1, 0x5f, 0xcc, 0xd1, 0x5f, 0xff, 0xd1, 0x5f, 0x10, 
  0x00, 0x00, 0x00, 0xd1, 0x5f, 0xcc, 0xd1, 0x5f, 0xff, 0xd1, 0x5f, 0xff, 0xd1, 0x5f, 0x77, 0x00, 0x00, 0x00, 0xd1, 0x5f, 0x98, 0xd1, 0x5f, 0xff, 0xd1, 0x5f, 0xff, 0xd1, 0x5f, 0xbb, 0x00, 0x00, 0x00, 0xd1, 0x5f, 0x77, 0xd1, 0x5f, 0xff, 0xd1, 0x5f, 0xcc, 0xd1, 0x5f, 0x10, 0x00, 0x01, 0x00, 0xd1, 0x5f, 0x10, 0xd1, 0x5f, 0xbb, 0xd1, 0x5f, 0xff, 0xd1, 0x5f, 0x77, 0xd1, 0x5f, 0x88, 0xd1, 0x5f, 0xff, 0xd1, 0x5f, 0xff, 0xd1, 0x5f, 0xbb, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd1, 0x5f, 0xcc, 0xd1, 0x5f, 0xff, 0xd1, 0x5f, 0x10, 
  0xd1, 0x5f, 0x10, 0xd1, 0x5f, 0xff, 0xd1, 0x5f, 0xdc, 0xd1, 0x5f, 0xef, 0xd1, 0x5f, 0xbb, 0x00, 0x00, 0x00, 0xd1, 0x5f, 0xcc, 0xd1, 0x5f, 0xdc, 0xd1, 0x5f, 0xff, 0xd1, 0x5f, 0xcc, 0x00, 0x00, 0x00, 0xd1, 0x5f, 0xbb, 0xd1, 0x5f, 0xff, 0xd1, 0x5f, 0x67, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd1, 0x5f, 0x67, 0xd1, 0x5f, 0xff, 0xd1, 0x5f, 0xab, 0xd1, 0x5f, 0x88, 0xd1, 0x5f, 0xff, 0xd1, 0x5f, 0xcc, 0xd1, 0x5f, 0xff, 0xd1, 0x5f, 0x88, 0x00, 0x00, 0x00, 0xd1, 0x5f, 0xcc, 0xd1, 0x5f, 0xff, 0xd1, 0x5f, 0x10, 
  0xd1, 0x5f, 0x33, 0xd1, 0x5f, 0xff, 0xd1, 0x5f, 0xcc, 0xd1, 0x5f, 0xbb, 0xd1, 0x5f, 0xff, 0xd1, 0x5f, 0x44, 0xd1, 0x5f, 0xff, 0xd1, 0x5f, 0x98, 0xd1, 0x5f, 0xcc, 0xd1, 0x5f, 0xff, 0xd1, 0x5f, 0x10, 0xd1, 0x5f, 0xcc, 0xd1, 0x5f, 0xff, 0xd1, 0x5f, 0x54, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd1, 0x5f, 0x33, 0xd1, 0x5f, 0xff, 0xd1, 0x5f, 0xcc, 0xd1, 0x5f, 0x88, 0xd1, 0x5f, 0xff, 0xd1, 0x5f, 0x54, 0xd1, 0x5f, 0xcc, 0xd1, 0x5f, 0xff, 0xd1, 0x5f, 0x54, 0xd1, 0x5f, 0xcc, 0xd1, 0x5f, 0xff, 0xd1, 0x5f, 0x10, 
  0xd1, 0x5f, 0x54, 0xd1, 0x5f, 0xff, 0xd1, 0x5f, 0x98, 0xd1, 0x5f, 0x77, 0xd1, 0x5f, 0xff, 0xd1, 0x5f, 0xcc, 0xd1, 0x5f, 0xff, 0xd1, 0x5f, 0x67, 0xd1, 0x5f, 0xcc, 0xd1, 0x5f, 0xff, 0xd1, 0x5f, 0x44, 0xd1, 0x5f, 0xbb, 0xd1, 0x5f, 0xff, 0xd1, 0x5f, 0x67, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd1, 0x5f, 0x54, 0xd1, 0x5f, 0xff, 0xd1, 0x5f, 0xbb, 0xd1, 0x5f, 0x88, 0xd1, 0x5f, 0xff, 0xd1, 0x5f, 0x54, 0xd1, 0x5f, 0x23, 0xd1, 0x5f, 0xef, 0xd1, 0x5f, 0xef, 0xd1, 0x5f, 0xcc, 0xd1, 0x5f, 0xff, 0xd1, 0x5f, 0x10, 
  0xd1, 0x5f, 0x88, 0xd1, 0x5f, 0xff, 0xd1, 0x5f, 0x88, 0xd1, 0x5f, 0x33, 0xd1, 0x5f, 0xff, 0xd1, 0x5f, 0xff, 0xd1, 0x5f, 0xef, 0x00, 0x01, 0x00, 0xd1, 0x5f, 0x88, 0xd1, 0x5f, 0xff, 0xd1, 0x5f, 0x54, 0xd1, 0x5f, 0x77, 0xd1, 0x5f, 0xff, 0xd1, 0x5f, 0xab, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd1, 0x5f, 0xab, 0xd1, 0x5f, 0xff, 0xd1, 0x5f, 0x77, 0xd1, 0x5f, 0x88, 0xd1, 0x5f, 0xff, 0xd1, 0x5f, 0x54, 0x00, 0x01, 0x00, 0xd1, 0x5f, 0x67, 0xd1, 0x5f, 0xff, 0xd1, 0x5f, 0xff, 0xd1, 0x5f, 0xff, 0xd1, 0x5f, 0x10, 
  0xd1, 0x5f, 0xab, 0xd1, 0x5f, 0xff, 0xd1, 0x5f, 0x54, 0x00, 0x01, 0x00, 0xd1, 0x5f, 0xcc, 0xd1, 0x5f, 0xff, 0xd1, 0x5f, 0xbb, 0x00, 0x00, 0x00, 0xd1, 0x5f, 0x77, 0xd1, 0x5f, 0xff, 0xd1, 0x5f, 0x88, 0x00, 0x01, 0x00, 0xd1, 0x5f, 0xcc, 0xd1, 0x5f, 0xff, 0xd1, 0x5f, 0xdc, 0xd1, 0x5f, 0x88, 0xd1, 0x5f, 0xcc, 0xd1, 0x5f, 0xff, 0xd1, 0x5f, 0xcc, 0x00, 0x01, 0x00, 0xd1, 0x5f, 0x88, 0xd1, 0x5f, 0xff, 0xd1, 0x5f, 0x54, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd1, 0x5f, 0x88, 0xd1, 0x5f, 0xff, 0xd1, 0x5f, 0xff, 0xd1, 0x5f, 0x10, 
  0xd1, 0x5f, 0x98, 0xd1, 0x5f, 0xef, 0xd1, 0x5f, 0x23, 0x00, 0x00, 0x00, 0xd1, 0x5f, 0x77, 0xd1, 0x5f, 0xff, 0xd1, 0x5f, 0x67, 0x00, 0x00, 0x00, 0xd1, 0x5f, 0x44, 0xd1, 0x5f, 0xff, 0xd1, 0x5f, 0x77, 0x00, 0x00, 0x00, 0xd1, 0x5f, 0x10, 0xd1, 0x5f, 0x98, 0xd1, 0x5f, 0xef, 0xd1, 0x5f, 0xff, 0xd1, 0x5f, 0xef, 0xd1, 0x5f, 0xab, 0xd1, 0x5f, 0x10, 0x00, 0x00, 0x00, 0xd1, 0x5f, 0x77, 0xd1, 0x5f, 0xff, 0xd1, 0x5f, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd1, 0x5f, 0xbb, 0xd1, 0x5f, 0xef, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd1, 0x5f, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd1, 0x5f, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd1, 0x5f, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd1, 0x5f, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
#if LV_COLOR_DEPTH == 32
  /*Pixel format:  Blue: 8 bit, Green: 8 bit, Red: 8 bit, Alpha: 8 bit*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfd, 0x28, 0xd2, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xfd, 0x28, 0xd2, 0x54, 0xfd, 0x28, 0xd2, 0xef, 0xfd, 0x28, 0xd2, 0x98, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfd, 0x28, 0xd2, 0xbb, 0xfd, 0x28, 0xd2, 0xef, 0xfd, 0x28, 0xd2, 0x33, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfd, 0x28, 0xd2, 0x10, 0xfd, 0x28, 0xd2, 0x88, 0xfd, 0x28, 0xd2, 0xdc, 0xfd, 0x28, 0xd2, 0xff, 0xfd, 0x28, 0xd2, 0xdc, 0xfd, 0x28, 0xd2, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfd, 0x28, 0xd2, 0x67, 0xfd, 0x28, 0xd2, 0xef, 0xfd, 0x28, 0xd2, 0x54, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfd, 0x28, 0xd2, 0x98, 0xfd, 0x28, 0xd2, 0xdc, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xfd, 0x28, 0xd2, 0xab, 0xfd, 0x28, 0xd2, 0xff, 0xfd, 0x28, 0xd2, 0xff, 0xfd, 0x28, 0xd2, 0x33, 0x00, 0x00, 0x00, 0x00, 0xfd, 0x28, 0xd2, 0x44, 0xfd, 0x28, 0xd2, 0xff, 0xfd, 0x28, 0xd2, 0xff, 0xfd, 0x28, 0xd2, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfd, 0x28, 0xd2, 0xbb, 0xfd, 0x28, 0xd2, 0xff, 0xfd, 0x28, 0xd2, 0xdc, 0xfd, 0x28, 0xd2, 0xcc, 0xfd, 0x28, 0xd2, 0xdc, 0xfd, 0x28, 0xd2, 0xff, 0xfd, 0x28, 0xd2, 0xbb, 0x00, 0x00, 0x00, 0x00, 0xfd, 0x28, 0xd2, 0x88, 0xfd, 0x28, 0xd2, 0xff, 0xfd, 0x28, 0xd2, 0xef, 0xfd, 0x28, 0xd2, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfd, 0x28, 0xd2, 0xcc, 0xfd, 0x28, 0xd2, 0xff, 0xfd, 0x28, 0xd2, 0x10, 
  0x00, 0x00, 0x00, 0x00, 0xfd, 0x28, 0xd2, 0xcc, 0xfd, 0x28, 0xd2, 0xff, 0xfd, 0x28, 0xd2, 0xff, 0xfd, 0x28, 0xd2, 0x77, 0x00, 0x00, 0x00, 0x00, 0xfd, 0x28, 0xd2, 0x98, 0xfd, 0x28, 0xd2, 0xff, 0xfd, 0x28, 0xd2, 0xff, 0xfd, 0x28, 0xd2, 0xbb, 0x00, 0x00, 0x00, 0x00, 0xfd, 0x28, 0xd2, 0x77, 0xfd, 0x28, 0xd2, 0xff, 0xfd, 0x28, 0xd2, 0xcc, 0xfd, 0x28, 0xd2, 0x10, 0x00, 0x00, 0x00, 0x00, 0xfd, 0x28, 0xd2, 0x10, 0xfd, 0x28, 0xd2, 0xbb, 0xfd, 0x28, 0xd2, 0xff, 0xfd, 0x28, 0xd2, 0x77, 0xfd, 0x28, 0xd2, 0x88, 0xfd, 0x28, 0xd2, 0xff, 0xfd, 0x28, 0xd2, 0xff, 0xfd, 0x28, 0xd2, 0xbb, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfd, 0x28, 0xd2, 0xcc, 0xfd, 0x28, 0xd2, 0xff, 0xfd, 0x28, 0xd2, 0x10, 
  0xfd, 0x28, 0xd2, 0x10, 0xfd, 0x28, 0xd2, 0xff, 0xfd, 0x28, 0xd2, 0xdc, 0xfd, 0x28, 0xd2, 0xef, 0xfd, 0x28, 0xd2, 0xbb, 0x00, 0x00, 0x00, 0x00, 0xfd, 0x28, 0xd2, 0xcc, 0xfd, 0x28, 0xd2, 0xdc, 0xfd, 0x28, 0xd2, 0xff, 0xfd, 0x28, 0xd2, 0xcc, 0x00, 0x00, 0x00, 0x00, 0xfd, 0x28, 0xd2, 0xbb, 0xfd, 0x28, 0xd2, 0xff, 0xfd, 0x28, 0xd2, 0x67, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfd, 0x28, 0xd2, 0x67, 0xfd, 0x28, 0xd2, 0xff, 0xfd, 0x28, 0xd2, 0xab, 0xfd, 0x28, 0xd2, 0x88, 0xfd, 0x28, 0xd2, 0xff, 0xfd, 0x28, 0xd2, 0xcc, 0xfd, 0x28, 0xd2, 0xff, 0xfd, 0x28, 0xd2, 0x88, 0x00, 0x00, 0x00, 0x00, 0xfd, 0x28, 0xd2, 0xcc, 0xfd, 0x28, 0xd2, 0xff, 0xfd, 0x28, 0xd2, 0x10, 
  0xfd, 0x28, 0xd2, 0x33, 0xfd, 0x28, 0xd2, 0xff, 0xfd, 0x28, 0xd2, 0xcc, 0xfd, 0x28, 0xd2, 0xbb, 0xfd, 0x28, 0xd2, 0xff, 0xfd, 0x28, 0xd2, 0x44, 0xfd, 0x28, 0xd2, 0xff, 0xfd, 0x28, 0xd2, 0x98, 0xfd, 0x28, 0xd2, 0xcc, 0xfd, 0x28, 0xd2, 0xff, 0xfd, 0x28, 0xd2, 0x10, 0xfd, 0x28, 0xd2, 0xcc, 0xfd, 0x28, 0xd2, 0xff, 0xfd, 0x28, 0xd2, 0x54, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfd, 0x28, 0xd2, 0x33, 0xfd, 0x28, 0xd2, 0xff, 0xfd, 0x28, 0xd2, 0xcc, 0xfd, 0x28, 0xd2, 0x88, 0xfd, 0x28, 0xd2, 0xff, 0xfd, 0x28, 0xd2, 0x54, 0xfd, 0x28, 0xd2, 0xcc, 0xfd, 0x28, 0xd2, 0xff, 0xfd, 0x28, 0xd2, 0x54, 0xfd, 0x28, 0xd2, 0xcc, 0xfd, 0x28, 0xd2, 0xff, 0xfd, 0x28, 0xd2, 0x10, 
  0xfd, 0x28, 0xd2, 0x54, 0xfd, 0x28, 0xd2, 0xff, 0xfd, 0x28, 0xd2, 0x98, 0xfd, 0x28, 0xd2, 0x77, 0xfd, 0x28, 0xd2, 0xff, 0xfd, 0x28, 0xd2, 0xcc, 0xfd, 0x28, 0xd2, 0xff, 0xfd, 0x28, 0xd2, 0x67, 0xfd, 0x28, 0xd2, 0xcc, 0xfd, 0x28, 0xd2, 0xff, 0xfd, 0x28, 0xd2, 0x44, 0xfd, 0x28, 0xd2, 0xbb, 0xfd, 0x28, 0xd2, 0xff, 0xfd, 0x28, 0xd2, 0x67, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfd, 0x28, 0xd2, 0x54, 0xfd, 0x28, 0xd2, 0xff, 0xfd, 0x28, 0xd2, 0xbb, 0xfd, 0x28, 0xd2, 0x88, 0xfd, 0x28, 0xd2, 0xff, 0xfd, 0x28, 0xd2, 0x54, 0xfd, 0x28, 0xd2, 0x23, 0xfd, 0x28, 0xd2, 0xef, 0xfd, 0x28, 0xd2, 0xef, 0xfd, 0x28, 0xd2, 0xcc, 0xfd, 0x28, 0xd2, 0xff, 0xfd, 0x28, 0xd2, 0x10, 
  0xfd, 0x28, 0xd2, 0x88, 0xfd, 0x28, 0xd2, 0xff, 0xfd, 0x28, 0xd2, 0x88, 0xfd, 0x28, 0xd2, 0x33, 0xfd, 0x28, 0xd2, 0xff, 0xfd, 0x28, 0xd2, 0xff, 0xfd, 0x28, 0xd2, 0xef, 0x00, 0x00, 0x00, 0x00, 0xfd, 0x28, 0xd2, 0x88, 0xfd, 0x28, 0xd2, 0xff, 0xfd, 0x28, 0xd2, 0x54, 0xfd, 0x28, 0xd2, 0x77, 0xfd, 0x28, 0xd2, 0xff, 0xfd, 0x28, 0xd2, 0xab, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfd, 0x28, 0xd2, 0xab, 0xfd, 0x28, 0xd2, 0xff, 0xfd, 0x28, 0xd2, 0x77, 0xfd, 0x28, 0xd2, 0x88, 0xfd, 0x28, 0xd2, 0xff, 0xfd, 0x28, 0xd2, 0x54, 0x00, 0x00, 0x00, 0x00, 0xfd, 0x28, 0xd2, 0x67, 0xfd, 0x28, 0xd2, 0xff, 0xfd, 0x28, 0xd2, 0xff, 0xfd, 0x28, 0xd2, 0xff, 0xfd, 0x28, 0xd2, 0x10, 
  0xfd, 0x28, 0xd2, 0xab, 0xfd, 0x28, 0xd2, 0xff, 0xfd, 0x28, 0xd2, 0x54, 0x00, 0x00, 0x00, 0x00, 0xfd, 0x28, 0xd2, 0xcc, 0xfd, 0x28, 0xd2, 0xff, 0xfd, 0x28, 0xd2, 0xbb, 0x00, 0x00, 0x00, 0x00, 0xfd, 0x28, 0xd2, 0x77, 0xfd, 0x28, 0xd2, 0xff, 0xfd, 0x28, 0xd2, 0x88, 0x00, 0x00, 0x00, 0x00, 0xfd, 0x28, 0xd2, 0xcc, 0xfd, 0x28, 0xd2, 0xff, 0xfd, 0x28, 0xd2, 0xdc, 0xfd, 0x28, 0xd2, 0x88, 0xfd, 0x28, 0xd2, 0xcc, 0xfd, 0x28, 0xd2, 0xff, 0xfd, 0x28, 0xd2, 0xcc, 0x00, 0x00, 0x00, 0x00, 0xfd, 0x28, 0xd2, 0x88, 0xfd, 0x28, 0xd2, 0xff, 0xfd, 0x28, 0xd2, 0x54, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfd, 0x28, 0xd2, 0x88, 0xfd, 0x28, 0xd2, 0xff, 0xfd, 0x28, 0xd2, 0xff, 0xfd, 0x28, 0xd2, 0x10, 
  0xfd, 0x28, 0xd2, 0x98, 0xfd, 0x28, 0xd2, 0xef, 0xfd, 0x28, 0xd2, 0x23, 0x00, 0x00, 0x00, 0x00, 0xfd, 0x28, 0xd2, 0x77, 0xfd, 0x28, 0xd2, 0xff, 0xfd, 0x28, 0xd2, 0x67, 0x00, 0x00, 0x00, 0x00, 0xfd, 0x28, 0xd2, 0x44, 0xfd, 0x28, 0xd2, 0xff, 0xfd, 0x28, 0xd2, 0x77, 0x00, 0x00, 0x00, 0x00, 0xfd, 0x28, 0xd2, 0x10, 0xfd, 0x28, 0xd2, 0x98, 0xfd, 0x28, 0xd2, 0xef, 0xfd, 0x28, 0xd2, 0xff, 0xfd, 0x28, 0xd2, 0xef, 0xfd, 0x28, 0xd2, 0xab, 0xfd, 0x28, 0xd2, 0x10, 0x00, 0x00, 0x00, 0x00, 0xfd, 0x28, 0xd2, 0x77, 0xfd, 0x28, 0xd2, 0xff, 0xfd, 0x28, 0xd2, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfd, 0x28, 0xd2, 0xbb, 0xfd, 0x28, 0xd2, 0xef, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfd, 0x28, 0xd2, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfd, 0x28, 0xd2, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfd, 0x28, 0xd2, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfd, 0x28, 0xd2, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
};

const lv_img_dsc_t IMG_CLOCKFACE_DIGITAL1_MON = {
  .header.always_zero = 0,
  .header.w = 29,
  .header.h = 13,
  .data_size = 377 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
  .data = IMG_CLOCKFACE_DIGITAL1_MON_map,
};