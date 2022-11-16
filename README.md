# Programar o Shield com o Makeblock 5 em Linux (apenas blocos):

1. Instalar o mlink (https://mblock.makeblock.com/en-us/download/mlink/) (apenas na 1ª utilização)
2. Dar permissões : sudo chmod a+rw /dev/ttyACM0
3. Usar o comando: sudo mblock-mlink start
4. Abrir o mblock no Google Chrome: https://ide.mblock.cc/
5. Escolher a porta série manualmente: ex: /dev/ttyACM0


# Arduino Shield IPS (PINOUT)

Entradas (0 a 1023):
- AI0 : Termómetro
- AI1 : Potenciómetro 1
- AI5 : Potenciómetro 2
- AD2 : Botão 1
- AD3 : Botão 2
- AD4 : Botão 3

Saídas digital ou então usar PWD (0 a 255):

- DI4 : Led vermelho
- DI5 : Led verde
- DI6 : Led amarelo


