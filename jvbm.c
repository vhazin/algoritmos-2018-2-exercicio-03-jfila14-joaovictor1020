//  Created by João Victor Bravo on 24/08/18.
//  Copyright © 2018 João Victor Bravo. All rights reserved.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    int n;
    scanf("%i", &n);
    int add[n];
    
    for (int i = 0; i < n; i++){
        scanf("%i", &add[i]);
    }
    
    int m;
    scanf("%i", &m);
    int remove[m];
    
    for (int i = 0; i < m; i++){
        scanf("%i", &remove[i]);
    }
    
    for (int i = 0; i < n; i++){
        int boolean = 1;
        for(int x = 0; x < m; x++){
            if (add[i] == remove[x]){
                boolean = 0;
                break;
            }
            if (boolean){
                printf("%i\n", add[i]);
            }
            return 0;
        }
    }
    
}
