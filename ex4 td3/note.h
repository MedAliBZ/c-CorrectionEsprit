#ifndef NOTE_H_INCLUDED
#define NOTE_H_INCLUDED

class Notes{
float test1;
float test2;
float ds;
float examen;
float orale;
float TP;
bool avecTP;
float calculNCC();
public:
    Notes(){
    test1=0;test2=0;ds=0;examen=0;orale=0;TP=0;avecTP=true;
    };
    Notes(float test1,float test2,float ds,float examen,float orale,float TP){this->test1=test1;this->test2=test2;this->ds=ds;this->examen=examen;this->orale=orale;this->TP=TP;avecTP=true;};
    Notes(float a,float b,float c,float d,float e){test1=a;test2=b;ds=c;examen=d;orale=e;avecTP=false;};
    float calculMoyenne();
};


#endif // NOTE_H_INCLUDED
