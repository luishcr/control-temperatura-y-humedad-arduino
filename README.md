## Ejercicio práctico de control de temperatura y humedad con Arduino

### Funcionamiento:
- Inicialmente la pantalla LCD mostrará el siguiente mensaje: 
P1 -> TEMP
P2 -> HUM
P3 -> TEMP y HUM.
- Cuando el usuario accione el pulsador 1, Arduino comenzará a leer periódicamente la temperatura entregada por el sensor DHT11 y mandará a la pantalla LCD el siguiente mensaje: Temperatura: XX C.
- Cuando el usuario accione el pulsador 2, Arduino comenzará a leer periódicamente la humedad entregada por el sensor DHT11 y mandará a la pantalla LCD el siguiente mensaje: Humedad: XX %.
- Cuando el usuario accione el pulsador 3, Arduino comenzará a leer periódicamente los valores de temperatura y humedad proporcionados por el sensor y mandará a la pantalla LCD alternativamente los siguientes
mensajes: 
Temperatura: XX C, Humedad XX %. 
- El tiempo de cada mensaje será de 1 segundo.
- En cualquier momento el usuario podrá cambiar la información que se muestra en la pantalla accionando cualquiera de los 3 pulsadores.

### Preview
![name-of-you-image](https://github.com/LuisHCR/control-temperatura-y-humedad-arduino/blob/main/preview/preview.jpg?raw=true)
