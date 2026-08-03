from PySide6.QtWidgets import QMainWindow, QApplication, QLineEdit, QMessageBox, QListWidget, QListWidgetItem, QPushButton, QWidget, QLabel, QVBoxLayout, QHBoxLayout
from PySide6.QtCore import Qt
import sys


class MainWindow(QMainWindow):
    def __init__(self):
        super().__init__()
        self.app = QApplication.instance()
        resolution = self.app.primaryScreen().availableSize()
        self.resize(resolution.width()/1.5, resolution.height()/1.5)
        self.setWindowTitle("ripelime")
        self.file_path = None
        self.file_name = None
        self.format_filter = None
        self.last_directory = None
        #icon_path = str(Path(__file__).resolve().parent / "images" / "icon.png")
        #self.setWindowIcon(QIcon(icon_path))
        self.showMaximized()


def main():
    app = QApplication(sys.argv)
    window = MainWindow()
    app.exec()

if __name__ == "__main__":
    main()