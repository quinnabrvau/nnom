/*
 * Copyright (c) 2018-2019, Jianjia Ma, Wearable Bio-Robotics Group (WBR)
 *
 * This file (nnom_porting.h) is unlicensed, independently to NNoM. 
 *
 * Change Logs:
 * Date           Author       Notes
 * 2019-02-05     Jianjia Ma   The first version
 */

#ifndef __NNOM_PORT_H__
#define __NNOM_PORT_H__

#include <stdint.h>
#include <string.h>
#include <stdbool.h>

// Porting
#include "rtthread.h"

// memory interfaces
#define nnom_malloc(n)   	rt_malloc(n) 
#define nnom_free(p)		rt_free(p)
#define nnom_memset(p,v,s)  rt_memset(p,v,s)

// runtime & debuges
#define nnom_us_get()		0
#define nnom_ms_get()		rt_tick_get()
#define NNOM_LOG(...)    	rt_kprintf(__VA_ARGS__)

// NNoM configuration
#define NNOM_BLOCK_NUM  	(8)		// maximum number of memory block  
#define DENSE_WEIGHT_OPT 	(1)		// if used fully connected layer optimized weights. 

//#define NNOM_USING_CMSIS_NN

#endif



