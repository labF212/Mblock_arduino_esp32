# arduino_shield
Programas de acordo com o Shield da EST
Entradas:

- AI1 : Potenciómetro 1
- AI5 : Potenciómetro 2
- AD2 : Botão 1
- AD3 : Botão 2
- AD4 : Botão 3

Saídas digital ou tamb:

- DI4 : Led vermelho
- DI5 : Led verde
- DI6 : Led amarelo

Programar o Shield com o Makeblock 5 em Linux (apenas blocos):
- Usar o Google Chrome (https://ide.mblock.cc/)
- Instalar o mlink (https://mblock.makeblock.com/en-us/download/mlink/) e usar o comando: sudo mblock-mlink start
- Escolher a porta série manualmente: ex: /dev/ttyACM0
- Dar permissões : sudo chmod a+rw /dev/ttyACM0
