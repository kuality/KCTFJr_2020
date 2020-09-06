#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

        srand((unsigned int)time(NULL));

        unsigned int t = rand() % (60 * 60);
	setvbuf(stdout, 0, 2, 0);
        printf("Hello, This is random chicken event!\nThis program sleep random time, and print flag ;D\nWinner Winner Chicken Dinner!\n");

printf("\n");
printf("      .\".\".\".\n");
printf("    (`       `)               _.-=-.\n");
printf("     '._.--.-;             .-`  -'  '.\n");
printf("    .-'`.o )  \\           /  .-_.--'  `\n");
printf("   `;---)  \\   ;         /  / ;' _-_.-' `\n");
printf("     `;\"`  ;    \\        ; .  .'   _-' \n");
printf("      (    )    |        |  / .-.-'    -`\n");
printf("       '-.-'     \\       | .' ` '.-'-\\`\n");
printf("        /_./\\_.|\\_\\      ;  ' .'-'.-.\n");
printf("        /         '-._    \\` /  _;-,\n");
printf("       |         .-=-.;-._ \\  -'-,\n");
printf("       \\        /      `\";`-`,-\"`)\n");
printf("        \\       \\     '-- `\\.\\\n");
printf("         '.      '._ '-- '--'/\n");
printf("           `-._     `'----'`;\n");
printf("               `\"\"\"--.____,/\n");
printf("                      \\\\  \\\n");
printf("                      // /`\n");
printf("                  ___// /__\n");
printf("                (`(`(---\"-`)\n");
printf("\n");
printf("sleeping...");
        sleep(t);

        printf("\nKCTFJr{Ch1ck3n_1S_4LWays_TRu3}\n");

        return 0;
}
