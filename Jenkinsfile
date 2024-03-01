pipeline {
    agent { docker { image 'python:3.9' } }

    stages {
        stage('build face api') {
            steps {
                echo 'Building face api..'
                sh 'bash setup/api.build.sh'
            }
        }

        stage('test face api') {
            steps {
                echo 'Testing face api..'
            }
        }

        stage('deploy face api') {
            steps {
                 sh 'Deploy face api..'
            }
        }
    }
}
