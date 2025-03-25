#ifndef _PID_H_
#define _PID_H_


typedef struct
{
    float                kp;         //P
    float                ki;         //I
    float                kd;         //D
    float                imax;       //�����޷�

    float                out_p;  //KP���
    float                out_i;  //KI���
    float                out_d;  //KD���
    float                out;    //pid���

    float                integrator; //< ����ֵ
    float                last_error; //< �ϴ����
    float                last_derivative;//< �ϴ���������ϴ����֮��
    unsigned long        last_t;     //< �ϴ�ʱ��
}pid_param_t;


float constrain_float(float amt, float low, float high);
short constrain_short(short amt, short low, short high);
short constrain_double(double amt, double low, double high);
float PidLocCtrl(pid_param_t * pid, float error);
float PidIncCtrl(pid_param_t * pid, float error);
void PidInit(pid_param_t * pid);
void My_Pid_Init(void);



#endif
