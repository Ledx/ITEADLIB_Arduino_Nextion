/**
 * @file NexCrop.h
 *
 * API of NexCrop. 
 *
 * @author  Wu Pengfei (email:<pengfei.wu@itead.cc>)
 * @date    2015/7/10
 * @copyright 
 * Copyright (C) 2014-2015 ITEAD Intelligent Systems Co., Ltd. \n
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 */

#ifndef __NEXCROP_H__
#define __NEXCROP_H__
#ifdef __cplusplus
#include "NexTouch.h"
#include "NexHardware.h"

/**
 * NexCrop,subclass of NexTouch,provides simple methods to control crop component. 
 *
 */
class NexCrop: public NexTouch
{
public: /* methods */
    NexCrop(NexPid pid, NexCid cid, char *name, NexTouchEventCb pop = NULL, void *pop_ptr = NULL);
    
    void attachPop(NexTouchEventCb pop, void *ptr = NULL);
    void detachPop(void);

    bool getPic(uint32_t *number);
    bool setPic(uint32_t number);
};

#endif /* #ifdef __cplusplus */
#endif /* #ifndef __NEXCROP_H__ */
