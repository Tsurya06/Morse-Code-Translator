def main():
    import encryption as cipher
    import decryption as decipher                           

    print("\t\t\t\t*******************************")
    print("\t\t\t\t*  MORSE  CODE  TRANSLATOR    *")
    print("\t\t\t\t---+---+---+---+---+---+---+---")
    print("\t\t\t\t* code by $uryakant Tripathi  *")
    print("\t\t\t\t*******************************")
    print("\n")

    ch= input("Press 'E' to encrypt and 'D' to decrypt: ")
    print("\n")

    if (ch=='E' or ch== 'e'):
        plain_Text= input("Enter the Message to encrypt: ").upper()
        print("\n")
        cipher.encryptor(plain_Text)     

    elif (ch=='D' or ch== 'd'):
        morse_code = input("Enter morse code to decrypt: ")
        print("\n")
        if (decipher.decryptor(morse_code)):
            decipher.decryptor(morse_code)
        #else:    

    else:
        print("Invalid input!!!") 

main()
rn=input("Run again? (y/n):: ")
if(rn=='y' or rn=='Y'):
    main()
else:
    print("\t\t\t\t***********************************")
    print("\t\t\t\t THANKYOU FOR USING THE TRANSLATOR")
    print("\t\t\t\t***********************************")
    print("\n")   
