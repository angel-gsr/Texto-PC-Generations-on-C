#include <iostream>
#include <locale.h>

#define blanco "\033[0m"
#define rojo "\033[31m"
#define verde   "\033[32m"
#define amarillo  "\033[33m"
#define azul    "\033[34m"
#define rojobold "\033[1m\033[31m"
int main()
 {
 	setlocale(LC_CTYPE, "");
	
    std::cout <<rojobold<<"\t Generaciones de Computadoras" <<blanco<< std::endl;
    
    std::cout <<verde<<"Primera Generación (1940-1950):" <<blanco<< std::endl;
    std::cout << "\t La primera generación de computadoras se basaba en lenguaje máquina para realizar operaciones y solo podían resolver un tiempo a la vez. Los computadores UNIVAC y ENIAC son ejemplos de componentes de la primera generación. LA UNIVAC fue la primera computadora comercial entregada a un cliente. Utilizaban valvulas electronicas y reles." << std::endl;
    
    std::cout <<verde<<"Segunda Generación (1950-1960):" <<blanco<< std::endl;
    std::cout << "\t La segunda generación comprende desde 1958 hasta 1963. En esta época se utilizaban transistores, los cuales eran más rápidos y pequeños que los tubos al vacío y usaban pequeños anillos magnéticos para almacenar información e instrucciones. Se introdujeron los transistores, reduciendo el tamano y el costo." << std::endl;
    //
    std::cout <<verde<<"Tercera Generación (1960-1970):" <<blanco<< std::endl;
    std::cout << "\t La tercera generación de computadoras emergió con el desarrollo de circuitos integrados (pastillas de silicio) en las que se colocan miles de componentes electrónicos en una integración en miniatura. A finales de los años 1950 se produjo la invención del circuito integrado o chip. Se usaron circuitos integrados para mejorar la velocidad y la eficiencia." << std::endl;
    //
    std::cout <<verde<<"Cuarta Generación (1970-1980):" <<blanco<< std::endl;
    std::cout << "\t La cuarta generación de las computadoras se da desde 1971 a 1981, lo más importante en esta generación es el invento del microprocesador el cual unía los circuitos integrados en un solo bloque. Se desarrollaron microprocesadores y las computadoras personales." << std::endl;
	//
    std::cout <<verde<<"Quinta Generación (1980 en adelante):" <<blanco<< std::endl;
    std::cout << "\t Quinta generación de computadoras. Fue un ambicioso proyecto elaborado por Japón a finales de la década de 1970. Su objetivo era la creación de una nueva clase de computadoras que utilizarían técnicas y tecnologías de inteligencia artificial usando el lenguaje prolog (PROgrammation en LOGique); por ejemplo. Se avanzo en la tecnologia de circuitos integrados y se investigo la IA." << std::endl;
    
    std::cout <<amarillo<< "Caracteristicas de la Primera Generacion de Computadoras:" <<blanco<< std::endl;
    std::cout << "1. Uso de valvulas electronicas: Las computadoras de la primera generacion utilizaban valvulas electronicas como componentes principales. Estas valvulas funcionaban como interruptores electronicos y permitian realizar calculos y procesamientos basicos." << std::endl;
    std::cout << "2. Uso de reles: Ademas de las valvulas, las primeras computadoras tambien empleaban reles electromagneticos para ciertas tareas de procesamiento y control. Estos reles eran mas lentos y menos confiables que las valvulas, pero seguian siendo componentes esenciales en esos sistemas." << std::endl;    
    std::cout << "3. Tamano y consumo de energia: Las computadoras de esta generacion eran enormes en comparacion con las tecnologias modernas. Ocupaban salas enteras y requerian sistemas de enfriamiento debido al calor generado por las valvulas y reles en funcionamiento. Ademas, consumian una gran cantidad de energia electrica." << std::endl;

	std::cout <<amarillo<<"Caracteristicas de la Segunda Generacion de Computadoras:" <<blanco<< std::endl;
    std::cout << "1. Uso de transistores: En la segunda generacion de computadoras, se reemplazaron las voluminosas valvulas electronicas por transistores. Los transistores eran mas pequenos, mas eficientes en energia y generaban menos calor, lo que permitio que las computadoras fueran mas rapidas y confiables." << std::endl;  
    std::cout << "2. Tamano reducido: Gracias al uso de transistores en lugar de valvulas, las computadoras de la segunda generacion eran mucho mas pequenas y ocupaban menos espacio en comparacion con sus predecesoras. Esto facilito su instalacion y mantenimiento." << std::endl;
    std::cout << "3. Mayor velocidad y eficiencia: Con la introduccion de los transistores, las computadoras de la segunda generacion lograron un aumento significativo en la velocidad de procesamiento y la eficiencia energetica. Esto permitio realizar calculos mas complejos en menos tiempo y con menos consumo de energia." <<blanco<< std::endl;


    return 0;
}

