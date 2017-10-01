/* Definition of the main blockchain structure 
 *
 * 
 */

#include <string>

class Block
{
	    int index;
	    int data;
        std::string hash;
	 	
        Block* prev_block;
        std::string prev_hash; 

    public:
        Block (int index, int data, std::string hash, Block* pb, std::string ph) : index(index),  
                                                                   data(data),
                                                                   hash(hash),
                                                                   prev_block(pb),
                                                                   prev_hash(ph)     
                                                                   { };

};	

