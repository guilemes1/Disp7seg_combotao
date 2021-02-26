#ifndef DISP7SEG_H
#define DISP7SEG_H

void disp7seg_init(void);
void disp7seg(char digito);

struct display7seg_T
{
    void (*init) (void);
    void (*print) (char); 
    
}; display7seg = { disp7seg_init , disp7seg };

#endif