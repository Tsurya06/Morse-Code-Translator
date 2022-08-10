import dictionary as dict

def decryptor(text):

    text += " "
    
   
    key_list= list(dict.MORSE_CODE_DICT.keys())
    val_list= list(dict.MORSE_CODE_DICT.values())

    
    morse_code=""
    plain_text=""
    for letters in text:
        if letters != " ":
            morse_code +=letters
            space_found=0
        else:
            space_found += 1
            if space_found==2:
                plain_text += " "
            else:
            
              
                plain_text= plain_text + key_list[val_list.index(morse_code)]
                        
                
                morse_code= ""    
    print("The plain text is: ",plain_text)
    return(plain_text)
