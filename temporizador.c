#include <stdio.h>
#include "pico/stdlib.h"
#include "pico/time.h"

int led = 11; 
bool led_on = true;
int time = 0;

bool repeating_timer_callback(struct repeating_timer *t) {
    //Apaga o led anterior que foi acionado
    if ( led > 11)
    {
        gpio_put(led - 1 ,!led_on);
    } 
    //Restart da sequencia 
    if (led > 13)
    {
        led = 11;
    }
    
    // Inicializa o LED
    gpio_init(led);              // Inicializa o pino do LED
    gpio_set_dir(led, GPIO_OUT); // Configura o pino como saída
    gpio_put(led ,led_on);       // Aciona o led

    // Imprime uma mensagem na saída serial indicando que 1 segundo se passou.
    printf("Pino: %d; ",led);

    led++;  //Incremento para inicialização do proximo led
}

int main()
{
    stdio_init_all();

     //configuração do timer
    struct repeating_timer timer;
    add_repeating_timer_ms(3000, repeating_timer_callback, NULL, &timer);

    while (true) {
        printf("Marca de %ds\n", time);
        time++;
        sleep_ms(1000);
        
    }
}
