/*
 * @Description: QMI8658C
 * @Author: ELEGOO
 * @Date: 2019-07-10 16:46:17
 * @LastEditTime: 2021-04-27 10:43:15
 * @LastEditors: Changhua
 */

#ifndef _QMI8658C_H_

#define _QMI8658C_H_
#include <Arduino.h>
class QMI8658C
{
public:
  bool QMI8658C_dveInit(void);
  bool QMI8658C_calibration(void);
  bool QMI8658C_dveGetEulerAngles(float *gyro, float *yaw);
  bool QMI8658C_dveGetEulerAngles(float *yaw);
  void QMI8658C_Check(void);
  bool QMI8658C_getMotion6(int16_t* ax, int16_t* ay, int16_t* az,
                          int16_t* gx, int16_t* gy, int16_t* gz);

public:
  int16_t ax, ay, az, gx, gy, gz;
  float pith, roll, yaw;
  unsigned long now, lastTime = 0;
  float dt;      //微分时间
  float agz = 0; //角度变量
  long gzo = 0;  //陀螺仪偏移量
};

//extern QMI8658C _QMI8658C;
#endif