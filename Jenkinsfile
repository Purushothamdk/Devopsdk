pipeline {
    agent any


    stages {
        stage('Build') {
            steps {
                sh 'make'
    
                
            }
        }
        stage('Test'){
            steps{
                echo "This is test stage"
            }
        }
        stage('Deploy'){
        steps{
            echo " This is deploment stage"
        }
    }
    }
}

