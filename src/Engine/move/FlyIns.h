/*
 * ========================= FlyIns.h ==========================
 *                          -- tpr --
 *                                        CREATE -- 2019.01.13
 *                                        MODIFY --
 * ----------------------------------------------------------
 *    类似 crossState, 每帧提供给 Fly模块的 运动指令
 * ----------------------------
 */
#ifndef _TPR_FLY_INS_H_
#define _TPR_FLY_INS_H_

//-------------------- Engine --------------------//
#include "SpeedLevel.h"


//-- 通过 弧度来传递 运动角度有很大的 局限性:
//   在某些情况下，外部要先将 位移向量 转换为 弧度，
//   再在 fly模块内部，将 弧度转换为 位移向量。
//-- 应该同时支持两套方案。
//   通过一个 flag 来选择。
//   ...
struct FlyIns{
    float       rad      { 0.0f };
    //SpeedLevel  speedLv  { SpeedLevel::LV_3 }; 
            //-- 为了与 CrawlIns 统一，暂时不携带 speedLv 信息
};



#endif 
