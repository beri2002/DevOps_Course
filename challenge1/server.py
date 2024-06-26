from flask import Flask

app = Flask(__name__)
AGE = 30

@app.route('/')
def home():
    return "Hello, Flask!"

@app.route('/age', methods=['GET'])
def age():
    return f"My age is {AGE}"

if __name__ == '__main__':
    app.run(port=8000)
