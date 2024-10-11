# Proyecto PWM
## Diagrama de estados
![Diagrama tipo Mealy](DiagramaDeEstados.png)
***Explicación***: 
En el estado _Inicial_, la máquina está a la espera de ser encendida mediante la tecla **A** y se queda en el mismo estado con cualquier otra entrada. 

Luego, en el estado _PWM on_, el PWM está activo y se puede variar la intensidad del LED ingresando un número con dos cifras que se representa con la entrada **xx**. **A** y **C** no tienen efecto en este estado y si se presionan el duty cycle continúa con el valor guardado **yy**. Con la entrada **B**, se apaga el PWM y vuelve al estado inicial. Y con la entrada del número **xx**, cambia al siguiente estado y provisionalmente la salida sigue en **yy**.

En el estado _Ajuste Duty Cycle_, con la entrada **C** se cancela el cambio de duty cycle y se regresa al estado anterior manteniendo el valor de duty cycle guardado **yy**. Si se presiona en cambio la **D**, el valor de **xx** se convierte en **yy** a partir de ese momento y por ende el duty cycle queda guardado, también regresa al estado anterior que es el de operación normal. En el diagrama este proceso se representa como: (**xx -> yy**). Con la entrada **A** no pasa nada, sigue esperando cancelación o guardado. Finalmente, si en este estado se presiona **B**, se apaga el PWM y vuelve al estado inicial.
 

