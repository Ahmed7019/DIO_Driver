#ifndef BITMATH_H_INCLUDED
#define BITMATH_H_INCLUDED

#define SET_BIT(REG,BITNUM) (REG|=(1<<BITNUM))
#define CLR_BIT(REG,BITNUM) (REG&=(~(1<<BITNUM)))
#define TOG_BIT(REG,BITNUM)  (REG^=(1<<BITNUM))
#define GET_BIT(REG,BITNUM)  ((REG>>BITNUM)&1)
#endif // BITMATH_H_INCLUDED
