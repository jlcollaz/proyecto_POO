# Proyecto POO

Integrantes:
- Nincol Quiroz
- Jonny Mercedes
- Jorge Collazos

Objetivo:
El objetivo de nuestro proyecto es facilitar el transporte de productos (tanto extraer como ingresar) mediante robots dentro de un almacén.

El programa leerá de un archivo con la siguiente estructura: 
Las 4  primeras líneas contendrán la siguiente información 
• Numero de Robots 
• Origen del Robot # 1 (fila, columna) 
• Origen del Robot # 2 (fila, columna) 
• Origen del Robot # 3 (fila, columna) 
 
La siguiente línea contendrá la siguiente información: 
• Numero de Instrucciones 

Finalmente, una lista de instrucciones para cada uno de los robots,  cada instrucción estará en una línea del archivo e incluirá la siguiente información: 
• Numero de Robot (1, 2, 3) 
• Operación (Ingreso, Retiro) 
• Destino, slot donde se dejará o recogerá el producto (fila, columna) 
• Producto (Discos, Libros, Dispositivos, etc.) 

El programa deberá: 
• Verificar que la información de cada instrucción sea válida, en caso una instrucción tenga información incorrecta la instrucción se omitirá y se continuara con la siguiente, debe considerarse que si inicialmente en un slot se almaceno un producto las siguientes instrucciones serán invalidas si el siguiente producto no coincide con el producto inicial. Si el slot quedara vacío debe validarse que no se puede retirar más productos y en ese caso será correcto que se almace otro producto diferente al producto inicial. 
• Si existen 2 o más instrucciones seguidas para un mismo robot, el programa deberá guardar o mantener la instrucción hasta que la instrucción en curso no sea terminada. 
• Se considera terminada la instrucción cuando llega a su destino, la siguiente instrucción tomara como origen el punto de destino, si tuviera que ingresar algún producto el robot deberá de retornar a su home recoger el producto y dejarlo en su destino, si tuviera que retirar el producto del almacén deberá de ir directamente al destino y llevarlo al home. 
• Las instrucciones y acciones deben de ejecutarse secuencial e intercaladamente una para cada robot.   
• Devolver en un nuevo archivo la secuencia de posiciones en que debe moverse los robots de modo que se empiece según la secuencia de instrucciones, en caso exista una colisión entre robots (un robot se encuentra dentro de su camino), el robot perderá su turno y esperara el siguiente para moverse, si luego de un turno completo, todos los robot han intentado moverse, no logra aun moverse entonces buscara una posición alternativa que genere el menor alejamiento a la ruta prevista y que le permita moverse. 
• La estructura del archivo de posiciones que serán almacenados en una línea será la siguiente: 
      ▪ # Secuencial 
      ▪ # de Robot 
      ▪ Posición (fila, columna) 
      ▪ condición (en tránsito, destino, home) 
• Adicionalmente se debe generar un archivo con el estado final de todos los slots, almacenando en cada línea del archivo la siguiente información: 
      ▪ Posición del slot (fila, columna) 
      ▪ Producto Almacenado (Discos, Libros, Dispositivos, etc.) 
      ▪ Cantidad de producto 
