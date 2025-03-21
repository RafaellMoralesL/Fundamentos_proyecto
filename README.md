Este es un proyecto en el lenguaje compilado de C, _ los lenguajes compilados requieren de un proceso extra, que transforma el código creado a lenguaje que entienda la computadora para su ejecución, si no se compila, no se crea un ejecutable que se utiliza para correr el código en dicha computadora _

### En resumen, 
Este proyecto C es un conversor de divisas, o monedas, se utilizan varios comandos como printf, para mostrar datos en pantalla y pedir datos al usuario, scan, para indicar que la anterior linea le pide datos a un usuario, guardarlo y utilizarlo en algun otro momento como una variabe, if, para condicionar partes del código a realizar un proceso distinto dependiendo si se cumple o no.
### Para ejecutar el proyecto 
Se necesita SSH, que es una conexión remota a una IP, en este caso a una máquina virtual de Ubuntu, se utiliza el ssh para tener una terminal fuera de la máquina virtual, con la terminal, se hace una conexión a la página de apache, el cual da acceso a un HTML dentro de la IP de la máquina virtual, se crea un archivo C o se copia el archivo C deseado y se pide a la aplicación de código que lo compile con el comando gcc nombredelarchivo c., esto crea un ejecutable para utilizarlo por medio de la consola con el comando cl nombredelarchivocompilado . 

### Instalación y ejecución de Archivo
Hay distintos requerimientos necesarios antes de poder ejecutar un archivo C, esta es una de las maneras o la manera que se trabajó en este repoositorio. 
1. Descargar Virtual Box y Ubuntu desde sus páginas oficiales
2. Crear una máquina virtual en Ubuntu
3. Dentro de la máquina virtual utilizar sudo apt, para instalar ifconfig, ssh y apache
``` Para ifconfig, se utiliza sudo apt -y install net-tools, para ssh sudo apt install openssh-server y para apache sudo apt install apache2 ```
4. Instalar VSCode desde su página oficial en su escritorio
5. Dentro de VSCode instalar la extensión de SSH
6. Utilizar la extensión SSH con la terminal de VSCode para acceder al servidor de la máquina virtual con apache
``` se utiliza el comando ssh remote_username@remote_host, donde se reemplaza por el usuario que se posee dentro de ubuntu, digamos ssh @proyectosremotos ```
7. Proveer de permisos a la conexión de VSCode
``` Con el comando chmod se otorgan los permisos dentro de Ubuntu, se necesitan permisos de escritura, lectura y ejecución ```
8. Colocar en una carpeta o solamente colocar el arhivo c
9. Compilar el archivo c
``` Usando el comando gcc nombredeseado.c es una forma de compilarlo dentro de VSCode ```
10. Ejecutar el archivo compilado c
``` Usando el comando cl nombreusadoalcompilar .c es una de las formas de ejecutarlo en VSCode ```
11. Proseguir con las instrucciones dle programa
