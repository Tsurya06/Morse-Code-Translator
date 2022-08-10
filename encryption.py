import dictionary as dict


def encryptor(text):
    encrypted_text= ""
    for letter in text:
        if letter != " ":

            
            encrypted_text= encrypted_text + dict.MORSE_CODE_DICT.get(letter) + " "
        else:
            
            encrypted_text += " "
    print("The morse code is : ",encrypted_text)
    return(encrypted_text)
    
