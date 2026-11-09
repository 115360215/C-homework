#include <stdio.h>
#include <stdlib.h>


void solveTowersOfHanoi(int disks, int sourcePeg, int destinationPeg, int tempPeg);

int main(void)
{
    
    int numberOfDisks; 
    scanf("%d",&numberOfDisks);

    printf(" Towers of Hanoi Solution for %d Disks:\n", numberOfDisks);
    
  
    solveTowersOfHanoi(numberOfDisks, 1, 3, 2);

    system("pause");
    return 0;
}


void solveTowersOfHanoi(int disks, int sourcePeg, int destinationPeg, int tempPeg)
{
   
    if (disks == 1)
    {
        printf("%d -> %d\n", sourcePeg, destinationPeg);
        return;
    }

    // 步驟 1：將上面 n-1 個盤子從起始柱移到輔助柱
    solveTowersOfHanoi(disks - 1, sourcePeg, tempPeg, destinationPeg);

    // 步驟 2：將最底下的第 n 個盤子從起始柱移到目標柱
    printf("%d -> %d\n", sourcePeg, destinationPeg);

    // 步驟 3：將剛剛在輔助柱的 n-1 個盤子移到目標柱
    solveTowersOfHanoi(disks - 1, tempPeg, destinationPeg, sourcePeg);
}