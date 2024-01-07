#include <stdio.h>
#include <stdlib.h>


                    int ord_m10(int k) 
                {int i = 1, pow = k %
            10;while (pow != 1) {pow =
        (pow * k) %     10;i++;}return
    i;}int              pow_m10(int k,
    int n)              {int k2;if (n
    == 0){              return 1;}if (
    n % 2)              {return (k *
    pow_m10(k, n - 1)) % 10;} else {k2 = pow_m10
    (k, n / 2);return(k2*k2)%10;}} int main( int 
    argc,char *argv[]){if(argc!=3){return 1;}int
    k=strtol(argv[1],NULL,10)%10,n=strtol(argv[2]
                        ,NULL,10);int mod=
                        ord_m10(k);printf
                        ("%s^%s = %d mod "
                        "10\n",argv[1],
                        argv[2],pow_m10(k,
                        n%mod));return 0;}
