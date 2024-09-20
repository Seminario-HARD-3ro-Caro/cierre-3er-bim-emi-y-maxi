// Ejercicio evaluatorio 3er bimestre
/*
  Integrantes
    Nombre: Emiliano
    Apellido: Tejada
    Curso: 3A
    
    Nombre: Maximiliano
    Apellido: Nudelman
    Curso: 3A
  
Congisgnas
  Conexionado:
    En la protoboard, conectar 4 LEDs para que cada uno pueda ser controlado individualmente. Cada LED deberá tener su respectiva resistencia.
    Se debe conectar tambien, un pulsador que permita recibir información de un usuario.
    Indicar a continuación los pines a los cuales se conectó cada elemento y el valor de resistencias utilizado:
      Pines:
        Boton: 8
        LED1:2 --> rojo
        LED2:3 --> verde
        LED3:4 --> azul
        LED4:5 --> amarillo
      Valor:
        R_boton: Vamos a usar la resistencia integrada en el circuito pullup interno de arduino
        R_LEDs: 330 Ohms

  Progamas:
    Se deben entregar un programa distinto por cada punto. Los programas son una modificación entre ellos.
    El código deberá estar comentado indicando qué se propone hacer con cada línea de código
    1.  El primer programa sirve para corroborar la correcta conexión de los elementos de hardware.
        El mismo deberá encender TODOS los LEDs cuando se presione el pulsador y apagarlos cuando éste se suelte.
    2.  En el siguiente programa se deberá prender de a UN LED POR VEZ.
        Por cada pulsación se deberá apagar el LED prendido y prender el LED más próximo de la derecha.
        En caso de no haber, se deberá volver a empezar la vuelta, empezando desde el LED de la izquierda.
    3.  A continnuación se desea fabricar un contador binario de 4 bits.
        El programa deberá contar de 0 a 15 mostrando la cuenta actual a través de los 4 LEDs.
        Se interpreta 0 si el LED está apagado y 1 si el LED está prendido. 
        La cuenta aumenta cada vez que el pulsador es presionado, al llegar a 15 deberá volver a empezar en 0.
        IMPORTANTE: la cuenta debe aumentar UNA SOLA VEZ por cada pulsación.
    4. Opcional:
        Utilizando comunicación serie, se desea crear un programa que muestre mediante los LEDs, el nro ingresado en el monitor serie.
        El programa deberá mostrar el número binario prendiendo los LEDs según el criterio del programa 3.
        El nro mostrado será ingresado por el usuario mediante el monitor serie.
        IMPORTANTE: si el nro es mayor a 15 se deberá enviar un mensaje de error. 

*/ 
// definimos constantes de cada pin que vayamos a usar
#define ledRojo 2
#define ledVerde 3
#define ledAzul 4
#define ledAmarillo 5
#define boton 8

void setup() {
  // Configuración del arduino
  // declaramos todos los pines, los leds como salida y el boton como dijimmos antes como input con el pullup interno de arduino
  pinMode(ledRojo,OUTPUT);
  pinMode(ledVerde,OUTPUT);
  pinMode(ledAzul,OUTPUT);
  pinMode(ledAmarillo,OUTPUT);
  pinMode(boton, INPUT_PULLUP);
}

void loop() {
  // Logica del programa

  if(digitalRead(boton)==LOW){   //Si esta pulsado el boton
    //se prenden todos los leds
    digitalWrite(ledRojo,HIGH);   
    digitalWrite(ledVerde,HIGH);
    digitalWrite(ledAzul,HIGH);
    digitalWrite(ledAmarillo,HIGH);
  }else{
    //si no esta presionado, estan apagados
    digitalWrite(ledRojo,LOW);
    digitalWrite(ledVerde,LOW);
    digitalWrite(ledAzul,LOW);
    digitalWrite(ledAmarillo,LOW);
  }

}
