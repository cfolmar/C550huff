/*Binary Tree implementation of Huffman Encoding
 *We are using the most basic form of huffman encoding
 *ie. only weighing individual ascii characters by 
 *occurance and then building the encoding tree directly 
 */


/*Constants~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

#define MAX_BITS    15   
/*The max bitlength of a certain code*/

#define MAX_CHR     128  
/*The max number of unique characters to encode*/





/*local variables~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

/*We want a structure to define the characters we want to encode*/
struct chr_data{
    int freq;
    int code;
}

/*For the huffman tree we also want a struct to do stuff*/
struct tree_def{
    struct chr_data; 
    struct tree_deff *lchld;
    struct tree_deff *rchld;
}

/*The priority queue being used to store the individual nodes of the huff tree*/
struct chr_data queue[MAX_CHR];

/*local static functions~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

local void build_tree
local void scan_tree
local void gen_code 


void gen_code()
{









}


