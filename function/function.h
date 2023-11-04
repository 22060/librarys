#ifndef FUNCTIONS
#define FUNCTIONS
class functions{
    private:
        float time;
        float otime;
        float a,b,c,d;
    public:
        void set(float a,float b,float c,float d){
            a = a;
            b = b;
            c = c;
            d = d;
            otime = micros()/100;
        }
        float function(){
            time = micros()/100;
            int t = (time - otime);
            return a*t*t*t + b*t*t + c*t + d;
        }
};
#endif