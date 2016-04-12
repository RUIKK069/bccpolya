Dscrição do problema:
   Calculo de uma aproximação da raiz quadrada de um numero real.

Apresentação da solução em linguagem matematica:
 Y=0 X=n*n raiz=n n=x+1 raiz=raizint raiz de X=raiz
      X!=n*n raizint=n-1 n=x+1 raiz=raizint raiz de X=raiz
 Y!=0 
                        AUX=1 Z=1 raizdec=raizint raizdec=raizdec+1/(10*Z) X<raizdec*raizdec X=raizdec*raizdec AUX=99 raiz=raizdec raiz de X=raiz
                                                                           X<raizdec*raizdec X!=raizdec*raizdec raizdec=raizdec-1/(10*Z) AUX=AUX+1 Z=Z*10 raiz=raizdec raiz de X=raiz
Apresentação da solução em Portugues Estruturado:   

 INICIAR                                                                                                                                 
   LER numeros inteiros [Y,Z,n,raizint,AUX];
   LER numeros reais [X,raiz,raizdec];
   Y=2;
   raiz=0;
   raizint=0;
   raizdec=0;
   n=0;
   VARIAVEL REAL [X];                                                                                                                 
ENQUANTO (n<=X)                                                                                                                  
    SE (X>n*n) então n=n+1;
    senão SE (X==n*n)
    então raiz=n; raizint=n; n=X+1;
    senão raizint=n-1; n=X+1;
    FIM do senão, senão , ENQUANTO
SE (raiz==0) E (X!=0) então
   SE (Y==0)
   então raiz=raizint;
   senão AUX=1; Z=1; raizdec=raizint;
   ENQUANTO (AUX<=Y)
   raizdec=raizdec+(1/(10*Z));
   SE (X>raizdec*raizdec)
   senão SE (X==raizdec*raizdec)
   então AUX=99;
   senão raizdec=raizdec-(1/(10*Z)); AUX=AUX+1; Z=Z*10;
   FIM do senão, senão, ENQUANTO, senão
raiz=raizdec;
   FIM do SE
ESCREVER "A raiz quadrada é raiz";
FIM

Apresentação da solução em Fluxograma:



Polya:
   George Polya,Matematico húngaro, falava que "uma grande descoberta resolve um grande problema";How to solve it.Polya da uma ideia geral da heuristica de problemas matemáticos e não-matematicos.
   Pólya formulou as quatro etapas essenciais para a resolução de problemas: 1ª etapa - Compreender o problema; 2ª etapa - Traçar um plano; 3ª etapa - Colocar o plano em prática; 4ª etapa - Comprovar os resultados. Metodo utilizado no desenvolvimento deste repositorio.
  

