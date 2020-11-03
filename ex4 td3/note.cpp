#include <iostream>
#include "note.h"


float Notes::calculNCC(){
return (test1+test2+orale+2*ds)/5;
}

float Notes::calculMoyenne(){
 return avecTP?(30*calculNCC()/100)+(20*TP/100)+(50*examen/100):(40*calculNCC()/100)+(60*examen/100);
}
