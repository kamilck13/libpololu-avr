/* $projectname$ - an application for the Pololu Orangutan SVP
 *
 * Author:  $username$
 * Created: $time$
 */


#include <pololu/orangutan.h>

int main()
{
  lcd_init_printf();

  while(1)
  {
    clear();
    print("Orangutan SVP"); 
    lcd_goto_xy(0, 1);
    printf("%d", get_ms());

    red_led(1);     // Turn on the red LED.
    delay_ms(200);  // Wait for 200 ms.

    red_led(0);     // Turn off the red LED.
    delay_ms(200);  // Wait for 200 ms.
  }
}
