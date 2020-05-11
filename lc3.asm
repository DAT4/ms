.ORIG x3000           
        ADD R2, R1, #0        
        ADD R3, R3, #0            
RESET   ADD R2, R2, #0        
        ADD R2, R2, R2        
        BRzp LOOP             
        NOT R2, R2            
LOOP    NOT R2, R2                              
        LD R3, LOC                  
        ADD R3, R3, #1            
        ADD R1, R1, #1        
        ADD R0, R0, #-13      
        BRnp RESET            
        NOT R2, R2            
        BRnp LOOP             
LOC     .FILL x4000                  
.END 
