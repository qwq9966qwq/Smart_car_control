#ifndef _PID_H_
#define _PID_H_


typedef struct
{
    float                kp;         //P
    float                ki;         //I
    float                kd;         //D
    float                imax;       //积分限幅

    float                out_p;  //KP输出
    float                out_i;  //KI输出
    float                out_d;  //KD输出
    float                out;    //pid输出

    float                integrator; //< 积分值
    float                last_error; //< 上次误差
    float                last_derivative;//< 上次误差与上上次误差之差
    unsigned long        last_t;     //< 上次时间
}pid_param_t;


float constrain_float(float amt, float low, float high);
short constrain_short(short amt, short low, short high);
short constrain_double(double amt, double low, double high);
float PidLocCtrl(pid_param_t * pid, float error);
float PidIncCtrl(pid_param_t * pid, float error);
void PidInit(pid_param_t * pid);
void My_Pid_Init(void);



#endif
