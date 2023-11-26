# C - printf

## Description
We need to write the basic code that allows printf to display a result. It's a function that displays results according to the format and/or choice of the user.


## Conversion specifiers

A character that specifies the type of conversion to be applied. The conversion specifiers and their meaning are:

d: The int argument should be signed decimal notation, and the resulting number is written.

i: The int argument should be signed integer notation, and the resulting number is written.

c: The int argument is converted to a char, and the resulting character is written.

s: The const char * argument is expected to be a pointer to an array of character type (pointer to a string).

%: No argument is converted. The complete conversion specification is '%%'.

For the compiled, using gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c

All your files will be compiled on Ubuntu 20.04 LTS using gcc.


## Example using printf
```
#include <stdio.h>

  int main(void) {
    printf("Hello World!\n");
    return 0;
  }
```
```Hello World! ``` 

```
int formatString(va_list *args)
{
        const char *str;
        int i = 0;

        str = va_arg(*args, const char *);
        if (str == NULL)
                str = "(null)";
        while (*str)
        {
                _putchar(*str++);
                i++;
        }
        return (i);
} 
```
```
Character:[H]
String:[I am a string !]
```
```
int formatPercent(va_list *args)
{
        (void)args;
        _putchar('%');
        return (1);
}
```
```
Percent:[%]
```
```
int formatDecimal(va_list *args)
{
        unsigned int abs;
        int number = va_arg(*args, int);
        int count = 0;
        int length_num;


        if (number == 0)
        {
                count = _putchar('0');
        }
        else if (number < 0)
        {
                count = _putchar('-');
                abs = (unsigned int)(-number);
        }
        else
        {
                abs = (unsigned int)number;
        }

        length_num = length(abs);

        while (length_num > 0)
        {
                int digit;

                digit = abs / power(10, length_num - 1) % 10;
                count += _putchar('0' + digit);
                length_num--;
        }

        return (count);
}
```
 ```
Len:[12]
```
```
int formatInteger(va_list *args)
{
        return (formatDecimal(args));
}
```
```
Length:[39, 39]
```

## FlowChart

![purchar](https://cdn.discordapp.com/attachments/1176082470224023592/1178329576947060786/putchar.png?ex=6575bfef&is=65634aef&hm=4727dfad3f04481c2ce2dc27b53a1f0b9c8f24b1f77b877f751f77896c61ea65&)

![complementary](https://cdn.discordapp.com/attachments/1176082470224023592/1178329577337143379/ComplementaryFunctions.png?ex=6575bfef&is=65634aef&hm=58ea9431db5081b76f255963d2fbf8c168beffa7f26f76c50ac33e4546ff666c&)

![mandatory](https://cdn.discordapp.com/attachments/1176082470224023592/1178329577731391518/MandatoryFunctions.png?ex=6575bfef&is=65634aef&hm=8c3ebaa410ccb1ea628e3d4d43f429773f69b6234a2ada9908a234bff0218535&)

![printf](https://cdn.discordapp.com/attachments/1176082470224023592/1178329578155020288/Printf.png?ex=6575bfef&is=65634aef&hm=ff07dfca279dae5eb79e09c85d6584239f041492f4f0809e9ecb2dabbc21b6f2&)
        

### Man page

[man_3_printf](https://github.com/Cedric002/holbertonschool-printf/blob/master/man_3_printf)


## Authors

- Cédric Guerin
- Nidigashan Kanagendran
