import pwn
import ctypes

class Menu:
    def __init__(self, target_path="./an"):
        self.target_path = target_path
        self.pr = pwn.process(self.target_path)

    def choose_option(self, option_num):
        self.pr.sendline(str(option_num).encode())
    def print_flag(self):
        self.pr.interactive()

def main():
    target_path = "./an"
    menu = Menu(target_path)
    libc = ctypes.CDLL('./libc.so.6')
    for i in range(100):
        libc.srand(i)
        random_num = libc.rand()
        option_num = random_num % 3 + 1
        menu.choose_option(option_num)
    menu.print_flag()

if __name__ == "__main__":
    main()
